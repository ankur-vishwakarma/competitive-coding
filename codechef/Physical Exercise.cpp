#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int nmk[t][3],xy[t][2];
	vector<vector<pair<int,int> > > ab,cd,ef;
	for(int i=0;i<t;i++){
		cin>>xy[i][0]>>xy[i][1]>>nmk[i][0]>>nmk[i][1]>>nmk[i][2];
		int b1,b2; vector<pair<int,int> > tmp;
		for(int j=0;j<nmk[i][0];j++) cin>>b1>>b2, tmp.push_back(make_pair(b1,b2));
		ab.push_back(tmp);
		tmp.clear();
		for(int j=0;j<nmk[i][1];j++) cin>>b1>>b2, tmp.push_back(make_pair(b1,b2));
		cd.push_back(tmp);
		tmp.clear();
		for(int j=0;j<nmk[i][2];j++) cin>>b1>>b2, tmp.push_back(make_pair(b1,b2));
		ef.push_back(tmp);
	}
	std::cout<<std::setprecision(10)<<std::fixed;
	for(int i=0;i<t;i++){
		//taking min in ab n cd
		int mina=ab[i][0].first,minb=ab[i][0].second,minc=cd[i][0].first,mind=cd[i][0].second;
		float sdst=pow(ab[i][0].first-cd[i][0].first,2)+pow(ab[i][0].second-cd[i][0].second,2);
		for(int j=0;j<nmk[i][0];j++){
			for(int k=0;k<nmk[i][1];k++){
				float dst=pow(ab[i][j].first-cd[i][k].first,2)+pow(ab[i][j].second-cd[i][k].second,2);
				if(dst<sdst) sdst=dst,mina=ab[i][j].first,minb=ab[i][j].second,minc=cd[i][k].first,mind=cd[i][k].second;
			}
		}
		//cout<<sdst<<"ac "<<mina<<"  "<<minc<<endl;
		sdst=sqrt(sdst);
		//frm a,b to e,f min
		int minae=ef[i][0].first,minaf=ef[i][0].second;
		float mdstae=pow(mina-ef[i][0].first,2)+pow(minb-ef[i][0].second,2);
		for(int j=1;j<nmk[i][2];j++){
			float efdst=pow(mina-ef[i][j].first,2)+pow(minb-ef[i][j].second,2);
			if(efdst<mdstae) mdstae=efdst,minae=ef[i][j].first,minaf=ef[i][j].second;
		} 
		//cout<<mdstae<<"ae "<<minae<<" "<<minaf<<endl;
		mdstae=sqrt(mdstae);
		//frm c,d to e,f min
		int mince=ef[i][0].first,mincf=ef[i][0].second;
		float mdstce=pow(minc-ef[i][0].first,2)+pow(mind-ef[i][0].second,2);
		for(int j=1;j<nmk[i][2];j++){
			float efdst=pow(minc-ef[i][j].first,2)+pow(mind-ef[i][j].second,2);
			if(efdst<mdstce) mdstce=efdst,mince=ef[i][j].first,mincf=ef[i][j].second;
		}
		//cout<<mdstce<<"ce "<<mince<<" "<<mincf<<endl;
		mdstce=sqrt(mdstce);
		//min frm x,y to c,d n a,d
		float mdstxa=sqrt(pow(mina-xy[i][0],2)+pow(minb-xy[i][1],2));
		float mdstxc=sqrt(pow(minc-xy[i][0],2)+pow(mind-xy[i][1],2));
		//cout<<pow(mina-xy[i][0],2)+pow(minb-xy[i][1],2)<<"xa\n";
		//cout<<pow(minc-xy[i][0],2)+pow(mind-xy[i][1],2)<<"xc\n";
		float xa_ce=mdstxa+mdstce,xc_ae=mdstxc+mdstae;
		if(xa_ce<xc_ae) cout<<xa_ce+sdst<<endl;
		else cout<<xc_ae+sdst<<endl;
	}
}

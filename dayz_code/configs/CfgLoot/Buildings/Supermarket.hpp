class Supermarket : Default
{
	lootChance = 0.45;
	minRoaming = 2;
	maxRoaming = 6;
	zombieChance = 0.3;
	zombieClass[] =
	{
		"zZombie_Base",
		"zZombie_Base",
		"z_teacher",
		"z_suit1",
		"z_suit2",
		"z_new_villager2",
		"z_new_villager3",
		"z_new_villager4"
	};
	lootGroup = Supermarket;
};

class Land_A_GeneralStore_01a : Supermarket
{
	zedPos[] = {{0.902344,-4.36133,-1.20178},{13.9651,-4.50293,-1.20172},{-3.41382,-4.39063,-1.20172},{7.36304,3.00781,-1.20172},{7.53394,-2.70117,-1.20172},{10.2612,0.111328,-1.2016},{1.93018,2.17285,-1.2016},{-2.90942,1.32031,-1.2016},{3.27588,-3.48242,-1.2016},{3.5752,0.0361328,-1.2016},{3.72729,8.36133,-1.2016},{-3.82788,5.33203,-1.2016},{-6.93237,1.07617,-1.2016},{7.84424,-0.136719,-1.2016},{-0.370605,5.17871,-1.20154},{10.5864,-3.84277,-1.20148},{4.77783,5.57617,-1.20148},{-7.29565,-2.68164,-1.20148},{9.84009,8.33984,-1.20148},{-1.28857,-2.57715,-1.20135},{13.0864,4.35645,-1.19165},{12.9934,6.31836,-1.19153},{-7.55054,8.54199,-1.19141},{-4.42407,8.9668,-1.19135}};
	lootPos[] = {
		//{-6.93237,1.07617,-1.2016},{-7.29565,-2.68164,-1.20148},{-3.41382,-4.39063,-1.20172},{-1.28857,-2.57715,-1.20135},{0.902344,-4.36133,-1.20178},{3.27588,-3.48242,-1.2016},{7.53394,-2.70117,-1.20172},{13.9651,-4.50293,-1.20172},{10.2612,0.111328,-1.2016},{10.5864,-3.84277,-1.20148},{7.84424,-0.136719,-1.2016},{3.5752,0.0361328,-1.2016},{-0.370605,5.17871,-1.20154},{4.77783,5.57617,-1.20148},{13.0864,4.35645,-1.19165},{12.9934,6.31836,-1.19153},{7.36304,3.00781,-1.20172},{1.93018,2.17285,-1.2016},{-3.82788,5.33203,-1.2016},{-7.55054,8.54199,-1.19141},{-4.42407,8.9668,-1.19135},{3.72729,8.36133,-1.2016},{9.84009,8.33984,-1.20148},{-2.90942,1.32031,-1.2016},
		{13.2969,4.94678,-1.20155},{2.97559,7.32373,-1.20155},{-8.35352,-0.0244141,-1.20155},{7.78223,4.45801,-1.20155},{6.59863,-0.292969,-1.20155},{-6.92285,-1.6709,-1.20155},{11.9189,-2.81885,-1.20155},{-1.85547,-2.16162,-1.20155}
	};
	lootPosSmall[] = {
		{12.4678,4.51172,-1.20155},{12.2119,6.25098,-0.301548},{12.1895,3.68262,0.0484505},{11.8174,6.31689,-0.65155},{-8.67676,-2.41064,-1.13155},{-4.2002,-3.14355,-0.351551},{-0.165039,-1.3457,-0.351551},{14.6006,-1.38281,-0.351551},{3.03809,-5.03418,-0.351551},{0.512695,3.40527,-0.31155},{4.77637,6.76172,-0.301548},{7.27539,0.938477,-0.621552},{3.96777,1.00488,-0.621552},{0.389648,0.95459,-0.621552},{5.04004,3.44287,-0.65155},{1.85254,6.4248,-0.65155},{-3.65723,6.61133,-0.20155},{-4.39746,4.46191,-0.691551},{6.9248,6.38574,-1.01155},{2.77637,3.38477,-1.01155},{-0.217773,6.68066,-1.01155},{4.49707,-4.98828,0.408451},{-2.33203,-1.35205,0.408451},{2.0127,-1.36572,0.408451},{6.39746,-3.04395,0.408451},{14.6045,-0.722168,0.408451},{-2.43164,-3.73682,0.02845},{-4.77539,-1.35986,0.02845},{-0.436523,-3.04297,0.02845},{14.6104,-2.17139,0.02845},{12.6592,0.830078,0.34845},{4.00684,-3.15039,-0.351551},{2.7334,-3.0415,-0.731548},{-2.67676,-1.36133,-0.731548},{-1.00488,-5.00537,-0.731548},{8.34863,-1.43018,-0.731548},{1.8291,3.77197,-0.661549}
	};
};

class Land_A_GeneralStore_01 : Supermarket
{
	zedPos[] = {{0.105713,-9.60449,-1.21088},{10.5925,-9.94238,-1.21088},{-4.85986,-10.4199,-1.21082},{13.3127,-7.64941,-1.2016},{-3.57446,4.46777,-1.2016},{11.1685,-3.7334,-1.20154},{13.3013,-1.77441,-1.20154},{-3.33813,0.615234,-1.20154},{-7.97754,-5.78418,-1.20154},{1.12256,-1.58691,-1.20148},{-6.80884,-1.23926,-1.20148},{-8.2251,-7.32227,-1.20148},{1.31885,1.4668,-1.20142},{1.6499,5.14746,-1.20142},{-2.02612,-7.64844,-1.20142},{3.78979,-5.69238,-1.20142},{8.89404,-8.37207,-1.20142},{-9.38428,4.46094,-1.20142},{-9.38843,-3.30176,-1.20142},{9.81201,1.43066,-1.20142},{-3.77539,-3.86621,-1.20135},{0.753906,-3.69336,-1.20129},{9.01367,3.84961,-1.20129}};
	lootPos[] = {
		//{-9.38843,-3.30176,-1.20142},{-3.77539,-3.86621,-1.20135},{1.31885,1.4668,-1.20142},{9.01367,3.84961,-1.20129},{13.3013,-1.77441,-1.20154},{9.81201,1.43066,-1.20142},{1.6499,5.14746,-1.20142},{0.753906,-3.69336,-1.20129},{13.3127,-7.64941,-1.2016},{11.1685,-3.7334,-1.20154},{8.89404,-8.37207,-1.20142},{-2.02612,-7.64844,-1.20142},{-7.97754,-5.78418,-1.20154},{-8.2251,-7.32227,-1.20148},{3.78979,-5.69238,-1.20142},{-9.38428,4.46094,-1.20142},{-3.57446,4.46777,-1.2016},{-3.33813,0.615234,-1.20154},{10.5925,-9.94238,-1.21088},{0.105713,-9.60449,-1.21088},{-4.85986,-10.4199,-1.21082},{-6.80884,-1.23926,-1.20148},{1.12256,-1.58691,-1.20148},
		{11.8149,1.27979,-1.20155},{5.10449,1.61377,-1.20155},{1.70215,3.4292,-1.20155},{-0.771973,2.04102,-1.20155},{-3.59473,-6.04688,-1.20155},{-2.38428,-5.82202,-1.20155},{10.5171,-6.46729,-1.20155},{12.8472,-4.97754,-1.20155},{8.63623,-3.65381,-1.20155},{-3.22852,-10.0454,-1.21081}
	};
	lootPosSmall[] = {
		{11.0537,-0.321289,-0.661549},{11.0303,2.8833,0.0484514},{10.6646,1.86377,-0.651548},{6.66162,-2.69971,-0.611548},{6.02979,-2.6416,-0.611548},{2.16553,-2.68262,-0.611548},{-1.36963,-2.75684,-0.611548},{-0.919434,-0.283936,-0.301549},{0.583008,-0.308594,-1.01155},{0.804199,3.0752,-0.311549},{4.90234,3.04053,0.0484514},{-5.73779,0.694824,-0.20155},{0.796875,0.0898438,-0.301549},{2.73145,2.66406,-0.301549},{0.523926,2.81567,-1.01155},{-4.8208,2.87158,-0.701549},{-3.87061,-5.0415,-0.731549},{-4.73096,-5.00537,0.408451},{-2.1792,-5.02222,-0.351549},{-3.39795,-6.95508,-0.731549},{-3.58203,-7.24365,-0.731549},{-3.49756,-7.12695,0.408451},{-9.95215,-6.05859,0.348451},{13.4136,-5.93457,0.408451},{13.4463,-4.45898,0.028451},{13.4424,-6.20215,-0.351549},{2.93018,-8.67773,-0.351549},{1.53516,-6.79199,-0.351549},{7.16211,-5.12427,-0.351549},{6.79346,-5.11816,-0.73155},{2.87158,-6.91943,-0.73155},{0.0541992,-5.03271,-0.73155},{-1.979,-8.6875,-0.73155},{-5.84424,-5.04883,-0.73155},{-6.99268,-5.06836,-1.11155},{5.23535,-6.8335,-1.11155},{0.290039,-8.68701,-1.11155},{-0.649414,-8.68115,0.40845},{-0.983398,-9.56299,-1.21082}
	};
};

//DZE ADDED BELOW
class Land_GeneralStore_01a_PMC : Supermarket
{
	lootPos[] = {{-8.28796,-0.435303,-1.20155},
		{-4.33252,5.51575,-1.20155},
		{1.05743,5.22791,-1.20155},
		{7.36511,2.40076,-1.20155},
		{13.2913,4.79199,-1.20155},
		{3.06958,7.47021,-1.20155},
		{7.43213,-0.266724,-1.20155},
		{13.5172,-1.04089,-1.20155},
		{10.0657,-1.31946,-1.20155},
		{3.42236,-3.46387,-1.20155},
		{-1.89722,-2.65051,-1.20155},
		{-7.28711,-1.95728,-1.20155}};
};

class LAND_shopping_sab1 : Supermarket
{
	lootPos[] = {
		{-30.0442,28.7891,-6.25663},
		{-18.561,23.7578,-6.25663},
		{1.32031,24.5879,-6.25663},
		{-7.86792,15.1182,-6.25663},
		{-22.3628,16.8828,-6.25663},
		{-26.7896,-24.9424,-6.25663},
		{-22.4546,-17.333,-6.25663},
		{-30.6628,-11.0195,-6.25663},
		{-2.51978,-23.1719,-6.25663},
		{0.889893,-14.1914,-6.25663},
		{23.3015,-15.1357,-6.25663},
		{42.353,-13.5322,-6.25663},
		{37.3396,-22.9014,-6.34278},
		{14.5388,-26.2158,-6.25663},
		{9.93091,-18.2871,-6.25663},
		{7.23315,24.9834,-6.25663},
		{8.8877,16.46,-6.25663},
		{16.9697,11.9541,-6.25663},
		{27.3679,21.3857,-6.25663},
		{-28.7632,27.7227,-2.38664},
		{33.5342,16.8047,-6.25663},
		{-31.0317,12.626,-2.38664},
		{-22.1975,16.3066,-2.38664},
		{-17.7339,21.0166,-2.38664},
		{-8.78564,27.5811,-2.38664},
		{-7.71826,15.2012,-2.38664},
		{1.65771,16.3496,-2.38664},
		{-36.4099,8.60352,-2.38664},
		{-43.6084,8.64258,-2.38664},
		{-41.8218,-2.6748,-2.38664},
		{-35.7854,-5.95313,-2.38664},
		{-16.2727,-13.2295,-2.38664},
		{-23.0032,-13.2764,-2.38664},
		{-25.6714,-25.6045,-2.38664},
		{-10.1611,-26.001,-2.38664},
		{2.98145,-26.7119,-2.38664},
		{2.59131,-13.5352,-2.38664},
		{10.7913,-16.2617,-2.38664},
		{17.1582,-27.3232,-2.38664},
		{26.3887,-25.0986,-2.38664},
		{30.8889,-22.1074,-2.38664},
		{42.4817,-21.6602,-2.47279},
		{41.8726,-13.7373,-2.38664},
		{32.7183,-12.5967,-2.38664},
		{34.2241,-5.04199,-2.38664},
		{40.2024,-7.14941,-2.38664},
		{39.8079,-0.0917969,-2.38664},
		{43.5059,6.59766,-2.38664},
		{33.3914,3.02148,-2.38664},
		{29.0322,11.1025,-2.38664},
		{33.1868,17.4531,-2.38664},
		{22.3228,26.3857,-2.38664},
		{7.32861,23.8564,-2.38664}};
};

class LAND_shopping_sab5: Supermarket
{
	lootPos[] = {
		{-21.1367,-1.94238,-2.18279},
		{-22.1387,5.40918,-2.18285},
		{-5.17383,-1.17773,-2.1828},
		{2,-12.3975,-2.18271},
		{-4.03906,-11.5391,-2.18272},
		{-9.62109,-11.6016,-2.18272},
		{-15.1699,-11.5225,-2.18272},
		{-18.5156,-12.9307,-2.18271},
		{-20.3633,-10.1182,-2.18273},
		{-17.1367,-6.3623,-2.18276},
		{-12.0098,-3.98535,-2.18277},
		{-14.1758,4.46973,-2.18284},
		{-15.7285,-1.02539,-2.1828},
		{3.40625,4.30664,-2.18284},
		{6.83789,-3.75391,-1.36222},
		{-1.27344,10.9521,-1.36222},
		{-22.4199,9.1084,-1.36222},
		{1.22461,8.13672,-2.18285},
		{-3.18164,8.71484,-2.18285},
		{-7.77344,7.51563,-2.18285}};
};

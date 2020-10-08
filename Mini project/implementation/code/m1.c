#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>



// Driver code
int main()
{
	int i=0,j=0,k=0,z=0,x=0,y=0,m=0,num[2360],anum[3000],num2[2600],site[7],sit2[7],whmi[7],whma[7],csmi[6],csma[6],DD[10],MM[10],YY[10],HH[10],Min[10],val;

	int sync[16]={1,1,1,0,1,0,1,1,1,0,0,1,0,0,0,0};
	int reg[15],site1=0,site2=0,region=0,waveheightmin=0,waveheightmax=0,currentspeedmin=0,currentspeedmax=0,DD1=0,MM1=0,YY1=0,HH1,Min1,DD2=0,msgtxt[2],msgtxt1;

	float T=10,R1,R2,sp1,sp2;
	char* states[100] = {"GUJARAT", "MAHARASHTRA", "GOA", "KARNATAKA", "KERALA", "SOUTH TAMILNADU", "NORTH TAMILNADU", "NORTH ANDHRAPRADESH","SOUTH ANDHRAPRADESH", "ODISHA", "WEST BENGAL", "ANDAMAN", "NICOBAR", "LAKSHADWEEP"};
    char* Gujarat[10000]= {"Lakhapat","Kanoj","Narayan Sarovar (Koteshwar)","Guvar","Lakhi Bandar","Bhutau","Moti Akri","Mitha Port","Jakhau","Kadoli","Khuada","Chhachhi","Bambhdai","Bhada","Nana Layja","Kanthada","Mandvi","Rawal Pir Dargah","Modhva","Tragdi","Tunda","Navinal","Zarpara","Mundra","Shekhadiya","Luni","Bhadreshwar","Kukadsar","Sanghad","Tuna Port","Tekra","Kandla","Navlakhi","Dabar Cr","Jodiya","Balachadi","Sachana","Kalyan Lt","Piroton Island","Sikka","Vadinar","Bharana","Nana Ambla","Salaya","Mota Asota","Poshitra","Okha","Mitha Port","Kachchigadh","Rupen","Dwarka","Kuranga","Bhogat","Navadra","Harshad Miyani","Miyani","Tukda Miyani","Raatadi","Kuchhadi","Porbandar","Odadar","Navibandar","Gorsar","Madhavpur","Shil","Mangrol","Mangrol Bara","Chorwad","Adri","Veraval","Hirakot","Kadwar","Sutrapada","Vadodra","Dhamlej","Mul Dwarka","Madhvad Lighthouse","Kotda","Diu Island","Nava Bandar","Simar","Saiyad Rajpara","Rohisha","Jafarabad","Shiyalbet","Pipavav","Patva","Gadhada","Mahuva (Bhavani Bandar)","Mahuva (Light House)","Nikol","Methla","Jhanjhmer","Gopnath","Sartanpar","Alang","Mithi Virdi","Haathab","Piram Bet","Badi","Ghogha","Bhavanagar New Port","Dungariya Bet","Kamatalav","Vadgam","Khambat","Surwada","Sarod","Kavi","Gangeshwar","Zamdi","Nadiyad","Tankari Pt","Asharsha","Denwa","Luvara","Mehgam","Dhanturia","Wansnoli","Bhadbhut","Oil Derrick","Kanthiajal","Kosamba (MangelVad)","Karanj","Mor","Marphalia","Gunav","Bhagal","Hazira","Dumas","Magadalla","Bhimpur","Dipla","Wasi Borsi","Dandi","Onjal Machhivad","Krishnapur","Bhat","Mendhar","Dholai","NaniDanti","Kakwadi","Bhadeli Jagalala","Valsad","Kosamba (Machhivad)","Magod Dungri","Umarsadi","Kolak","Bhimpor","Daman","Kalai","Fansa", "Maroli", "Tadgam", "Kathalwada", "Nargol", "Umargam"};
    char* Maharashtra[10000]= {"Zai","Bordi","Gholvad","Narpad/DahanuAgar","Dahanu","Khondha Cr","DhaktiDahanu/Gungawada","Varor","Kambode","Ghivali","Tarapur Pt","PokharanDandi/Uchheli","Navapur (Ucheli Cr)","Murbe","Satpati(N)","Satpati(M/S)","Satpati","Shirgaon","Vadarai","Kelwane","Kelwa/KelwaDadar","Mahim Cr","Danda","Edavan/Kore","Datiware","Arnala","Tembhi","Arnalapada","Rangaon","MulgaonDanda","Vasai(Pachubandar)","Khochiwade","Vasai","Dongi Point","Dongri","Uttan","Uttan(Bhatye)","Gorai","Manori","Marve/Malvani","YerangalBhati","Madh","Patwadi","Vesava","Varsova","JuhumoraGaon","JuhuTara","KharDanda","Uarashi Rf","Chimbai","Mahim","Naigaon","Worli","Worli-Lotus","Malabar Port (Mumbai)","CuffPared","Colaba Pt.(Mumbai)","SasoonDock",	"Kalbadevi"	,"Chinchbunder","NewFerryWharf"	"Trombay","Mahul","WashiBridge,PWDJetty","Vashi(Haveli)","Belapur","UlwaMoha","Morave-1","Nhawa","Dighode","Mora","HanumanKoliwada","Uran","Bhalpada","Waredi","Dharmtar Dhakka","Revas","Karanja Uran","Sasawane","Avas","Navgaon","Thal","VarsoliChalmala","Alibag","Nagaon","Theronda","Rewdanda","Boghar","Salav","Revadanda","Korlai","Borli-Mandla","Mazgaon","Ekdara","Murud","Rajpuri","Agardanda","Mandad","Pabhare","Kharsai","Kudgaon","Dighi(Savari)","Nanwell Pt","Bhardkhol-Diveagar","Diveagar","Shekhadi(Khalchi)","Srivardhan","Bagmandla","Veshawi-Bankot","Bankot","Velas","Kelshi","Kelsi","AadeUttambar","Anjarle","Paj","HarnePort","Harne","Murud","Burondi","Kolthare","Dabhol","Veldur/Navanagar/Dhopave","Tolkeshwar Pt","Anjanvel","Guhagar","Asgoli","Sakhar-Hedvi","Palshet","Budhal","Kondkarul","Welneshwar","Hedvi","Jaigad","SakharJaigad","Jaigarh Head","Varawade","Kharviwada","MTDC","Kalabadevi","SakhartarKasarveli","JakiMirya","Mirkarwada","Ratnagiri","Rajiwada","Rajiwada-Kerla","Someshvar","Phansop","Golap-Pawas","Purnagad","Purangad","Sakhri-Natye","Mavlanga","Ambere","Bokarwadi","Wada Vetye","Sakharinate","Ambolgad","Ambolgarh","PhansePadawane","Padve","Sakhar-Akshi","Wagapur Pt","Jambhari","Vijayadurg Hr","Vijaydurg","Kalamaiwadi","Wadatar/Malai","Anandwadi(Devgad)","Devgarh","Mithmumbri/Taramumbari","Kunkeshwar","Kunkeshwar/Katvan","Mithbao","Munge","Achra Pt","Achara","Tondavli","Hadi","Sarjekot-MiryaBandh","Talashil","Sarjekot","Dhurivada","Sindhudurg (Malvan)","Wayri","Tarkarli/Kalethar","Deobag","Kochara-Nivati","Khavana","Kelus","Mobar-Bhogave","Khanoli-Wayangani","Vengurla","Dabhoswada/Navabag","MuthUbhadanda","Mochemad","Shiroda","Redi","Terekhol"};
    char* Goa[1000]= {"Chapora","Aguada","Panaji (Malim)","Santerem Pt (Vasco)","Majorde","Fatarde","Betul","Cutbona","Talpona","Kolamb"};
    char* Karnataka[1000]= { "Majali","Sadasguvgarg","Karwar","Belekeri","Gangavali","Tadri","Kumta Pt","Dhareshvar","Karki","Honavar","Kasarkod","Navayatkere","Mavalli","Shirali","Bhatkal","Baindur","Navunda","Gangoli","Coondapoor (gangoli)","Kota","Hangarkatta","Malpe","Udiyavara","Kapu","Mulki","Hosabettu-Udaivar","Suratakal Pt","New Mangalore","Mangalore"};
    char* Lakshadeep[1000]={"Valiyapani reef","Byramgore","Cheriyapani reef","Chetlat I","Bitra I","Kiltani","Perumalpar reef","Kadmath I","Amini I","Tinnakara","Bangaram I","Agatti I","Androth I","Kavaratti I","Valiykara","Suheli","Cheriyakara","Kalpeni I","Minicoy"};
    char* Odisha[1000]={"Rameyapatna","Ekasingi","Markondi","New Golabandha","Gopalpur-IFH","Golabandha","Old Buxipetta","New Baxipalli","Gopalpur","Garyampetta","Sana Aryapalli","BadaNuagaon","SanaNuagaon","Ganjam","Kantiagada(Podampeta)","Prayagi","Ramalanka","Bajarkot","Khirisahi","Satpara","Siandi","Arakhakud","PuriNorth","PuriSouth","Puri","Penthakata","Bangor","Chandrabhaga","Kajalpatia(Khandiapatna)","Tondahar","Anakona&Dalukani","Astaranga","Balipantala","Sudhikeswar(Talia)","NuagarhFH(Astaranga)","Nuagar","Bandar","Magarkhia","Saharabedi","Kaliakana","Noliasahi","Nuagan","Jamuka","ParadeepFH","Paradip","Atharabanki","Chumuhani","Kharnasi","False Point","Kharinasi","Jambu","Jmboo","Barunie","Sasanpeta(Tantiapal)","Gajarajpur","Hariharpur","Satbhaya","Ahirajpur","Talchua","Dhamra","Chandinipal","DhamaraFH","Kaithakhola","Karanjamal","Baincha","Karanpalli","Kasianala","ChudamaniBoatJetty","Chudamani","Panchubisa","Godaisagar","Janipur","Mahisali","Chandipur","Balaramgadi(ChandipurFLC)","Balaramgadi","Bahabalapur(KasafalSouth)","Bahabalpur","Bindha","Hansakura","Kasafala","Choumukh","Dagara","Kirtania","Chandeneswar","Talasari"};
    char* Nicobar[1000]={"Keating Pt (Car Nicobar)","Mus,CarNicobar","Sawai (Car Nicobar)","Teetop,CarNicobar","Passa ,Car Nicobar","Arrong(Car Nicobar)","Malacca,CarNicobar","Batti Malv","Chowra","Aoang","Laksi","Bampoka","Kai-Hoa","Takaroach","Trinket,Nancowry","Kamorta,Nancowry","Hitui,Nancowry","Champion,Nancowry","Balubasti,Nancowry Island","Attabiak,Nancowry Island","Tapong,Nancowry Island","Cape Connaught","Kapanga,Katchall","Katchal East Bay","Jansin","Katchal West Bay","Sombrero Pt","Pulo Patia","Kabra Pt","Tenlaa","Rosen Pt","CampbellBay","Vijoy Nagar","Indira Pt","Kokeon","Pulo Kunji"};
    char* NorthTamilnadu[1000]={"Krishnajipattinam","Prathaparamanpattinam","Kattumavadi","Sembiyanmadevipattinam","Ganesapuram","Vallavanpattinam","Subbamachatram","Somanathanpattinam","Annanaga Pudhutheru","Mandhiripattinam","Senthalaivayal","Adaikkadevan","Sambaipattinam","Karanguda","Kazhumanguda","Sethubavachattram","Pillayarthidal","Chinnamanai","Mallipattinam","Puthupattinam","Velivayal","Kollukadu","Keelathottam","Eripurakkarai","Gandhinagar","Karaiyurtheru","Maravakadu","Thambikottai","Muthupet","Point Calimer","Kodiyakarai","Vedaranniyam","Arkkattuthurai","Topputturai","Pushpavanam","Kallinodu","Vellapallam","Vanavanmadevi","Vettaikaranrippu","Vilunthamavadi","Kameshwaram","Seruthur","Velanganni","Akkaraipettai","Nagapattinam Harbour","Nambiyar Nagar","Samanthanpettai","Nagore","Karikal","Pattinacherry","Chinnorpettai","Chandrappadi","Tharangampadi","Kuttiyandiyur","Bommayanpettai(Vellakoil)","Perumalpettai","Tranquebar","Pudhupettai","Thalampettai","Chinnangudi","Kaverippattinam","Vanagiri","Poombuhar","Pudukuppam","Madathukuppam","Naickerkuppam","Chavadikuppam","Keezhamoovarkarai","Tirumullaivasal","Thoduvai","Mudasalodai Village","Koozhayar","Kottaimedu","Madavamedu","Pazhayar","Killai","M.G.R.Thittu","Mudasalodai","Parangipettai","Portonovo","C Pudupettai","Pudukuppam","Veerampatinam","Samanthapettai","Samiyarpettai","Kumarapettai","Periyakuppam","Chithiraipettai","Rajappettai","Sothikuppam","Cuddalore Harbour","Sonaankuppam","Devanampattinam","Thazhanguda","Moorthipudukuppam","Panithittu","Narambai","Nallavadu","P.Pudukuppam","Chinna Veerampattinam","Veerampattinam","Thengaithittu","Pondicherry","Vaithikuppam","Solainagar North","Sodhanaikuppam","Nadukuppam","Thandhirayankuppam","Chinna mudaliarchavadi","Bommaiyarpalyam","Pillaichavadi","Periya Kalapet","Ganapathichettikulam","Pudhukuppam","Anichankuppam","Mudaliarkuppam","Nochikuppam","Koonimedu Kuppam","Chettinagar","Anumandhaikuppam","Komuttichavadikuppam","Mandavai Pudukuppam","Ekkiyarkuppam","Marakkanam","Kaippanikuppam","Vasavankuppam","Muttukaduazhagankuppam","Alambaraikuppam","Kadappakam","Panaiyur Periya Kuppam","Panaiyur Chinnakuppam","Mudaliyar Kuppam","Cheyyur","Paramankeni","Perun Thuravu Kuppam","Pudhunadukuppam","Pazhayanadukuppam","Angalamman Kuppam","Kadalore Ali Kuppam","Padalore Periya Kuppam","Kadalore Chinna Kuppam","Uyyalikuppam","Sadras","Pudupattinam","Sathurangapattinam","Umarikuppam","Meyyurkuppam","Kokilamedu","Venpursham","Mamallapuram","Mahabalipuram","Devaneri","Salavankuppam","Pudu Nemeli Kuppam","Pattipulam","Soolerikattukuppam","Nemmelikuppam","Pudhukalpakkam","Chemacherry","Covelong(Kovalam)","Egattur Karikattukuppam","Kanathur Reddy Kuppam","Kanathur","Nainarkuppam","Panaiyurkuppam","Injampakkam","Chinnandikuppam","Periya Neelankarai","Chinna Neelankarai","Palavakkam","Kottivakkam","Thiruvanmiyur","Odaikuppam","Orurkuppam","Srinivasapuram","Mullimanagar","Pattinampakkam","Nochikuppam","Cathedral(Chennai)","Nadukuppam","Ayothikuppam","Mattankuppam","Chennai","Lakshmipuram Odaikuppam","Royapuram","Ondikuppam","Nallathanneer Odaikuppam","Thiruchinnankuppam","Kasiviswanathar koil Kuppam","Palagaithottikuppam","Kasikoilkuppam","Ernavoorkuppam","Kathivakkam Chinnakuppam","Kathivakkam Periakuppam","Thazankuppam","Ennore Mugathuvarakuppan","Ennorekuppam","Pulicat","Coromandel"};
	char* NorthAndhraPradesh[1000]={"Kothapalem LH","Bhairavapalem","Kakinada","Vakalapudi","Uppada","Konapapeta","Perumallapuram","Palmanpeta","Danavaipeta","Pentakota","Revu Polavaram","Rambilli","Pudimadaka","Visakhapatnam","Bhimunipatnam","Mukkam","Konada","Chintapalli","Ramachandrapuram","Allivalasa","Kuppili","Srikurmam","Bandaruvanipeta","Kalingapatnam","Guppidipeta","Jagannadhapuram","Maruvada","Kotta Naupada","Bavanapadu","Nuvvalarevu","Metturu","Ganguvada","Baruva","Iduvanipalem","Kaviti","Anantaraipur","KeutaSonapur","PatiSonapur","Sonnapurampeta"};
    char* SouthAndhraPradesh[1000]={"Annamalaichery","Periyamangodu","Arambakkam","Pulinjerikuppam","Durgarajupatnam","Kondur","Arkatapalem","Kottapatnam","Tammenapatnam","Krishnapatnam(Upputeru)","Krishnapatnam","Pathapalem","Maipadu","Pattapupalem","Utukuru","Isakapalle","Zuvvaladinne","Vatturupallepalem","Ramayapatnam","Chakicherla","Itamukkala","Allurukottapatnam","Adavipallipalem","Vetapalem","Vadarevu","Bestapalam Bapatla","Suryalanka","Nizampatnam","Nachugunta","Etimoga","Sorlagondi","Palakayatippa","Machilipatnam","Giripuram","Pedda Gollapalem","Antarvedi","Narasapur Pt","Bandamurlanka","Odalarevu"};
	char* WestBengal[1000]={"DighaMohanaF.F.T.A.(Digha)","Shankarpur","SankarpurF.F.T.A.(Sankarpur)","TajpurJaldha","Digha","Junput","Petuaghat(Dariapur)","LightHouse,GangasagarGP","Diamond Harbour Jettty Ghat in front of SDO,Office","Diamond Harbour","Kakdwip","Namkhana","Sagar","Frasergunje","FrezerganjFH","Lothian Island"};
	char* SouthTamilnadu[1000]={"Neerodi","Marthandamthurai","Vallavilai","Eraviputhenthurai","Ezhudesam Chinnathurai","Thoothur","Poothurai","Erayammanthura","Erayumanthurai","Thengapattanam","Mulloorthurai","Ramanthurai","Enayam puthenthurai","Enayam Chinnathurai","Enayam","Midaalam","Midalam(Naduthurai)","Kurumbanai","Vaniyakudi","Kodimunai","Simon colony","Coalchel","Kottilpadu","Mandaikadu puthoor","Periavilai","Chinnavilai","Melakadiapattinam","Kovalam","Keezhakadiapattinam","Melamuttom","Muttom","Azhikkal","Rajakkamanglam","Rajakamangalam Thurai","Periyakadu","Pozhikkarai","Kesavanputhenthurai","Puthenthurai","Pallam","Keezhamanakudi","Mela Manakudi","Kovalam Kanniyakumarai","Puthur","Puthugramam(Vavuthurai)","Kanniyakumari","Chinnamuttom","Lipuram","Arockiyapuram","Kuttapuli","Chettikulam","Perumanal","Kudangulam","Idinthakarai","Perumanal","Thommayarpuram(Muddukuli)","Koothanguzhi","Kundal","Uvari","Koottappanai","Kooduthalai","Periyathalai","Manappad Pt","Kulasekharapattinam","Kallamozhi","Alanthalai","Amalinagar","Jeevanagar","Veerapandiyapattinam","Singhithurai","Kombuthurai Madhakoil","Punnakkayal","Ratchanyapuram","Tuticorin","Pandyan","Inico nagar","Thoothukudi","Therespuram","Thalamuthunagar","Vellapatti","Tharuvaikulam","Pattanamarudur","Veppalodai","Sippikulam","Keezhavaippar","Periasamypuram","Vembar","Rojma Nagar","Terku Mookkaiyur","Valinokkam","Chinna Ervadi","Kilakarai","Kalimankundu","Muttupettai","Inthira Nagar","Valangapuri","Seeniyappa Dharga","Vedhalai","Mandapam(South)","Chinnapalam","Pamban Kunthukal","Mukuntharayarchatram","Dhanushkodi","Verkode","Rameshwaram Harbour","Olaikuda","Villundi","Thangachimadam","Pamban Light House","Mandpam(North)","Munaikadu","Atrangarai","Alagankulam","Pudukkudi","Panaikulam","Pudhuvalasaichathiram","Palanivalasai","Mudiveeranpattinam","Devipattinam South","Devipattinam","Pathanendal","Thirupalaikudi North","Moreppanai","Karankadu","Mullimanai","Pudhupattinam","Tiruvettriyur","Soliyakudi Harbour","Nambuthalai","Tondi","M.R.Pattinam","Valasapatinam(P.V.Pattinam)","Narendhal","Dhamotharanpattinam","Pasipattinam","Theerthaandathanam","Sundarapandiyanpatta","Muthukuda","R.Pudhupattinam","Gopalapattinam","Muthanenthal","Ayyampattinam","Kottaippattanam","Pudhukkudi South","Pudhukkudi North","Anthoniyarpuram","Ponagaram","Manamelkudi","Keelakudiyiruppu","Vadakku Amapattinam","Seetharampattinam"};
	char* Kerala[1000]={"Kunzhathur","Manjeshwara","Uppala","Arikkadi","Kumbla","Koipadi","Mogral","Adakathbail","Kasaragod","ThalangarJetty","Kotikulam","Bekal","Pallikere","Chittari","Ajanoor-N-Bella","Hosdrug","Nileswaram","Thaikadappuram","BadagaraAzhithala","CheruvathurFH","Maniyat","Kavvayi","Kunnariyam","Ettikulam","Kotte Kunnu","Koloth","Azhikal","Valapattanam","Azheecode","AzheecodeSouth","Kannur","AyikkaraFH","Edakkad","Muzhuppilangad","Tellicherry","NewMahe","Mahe","ChombalaFH","Uralungal","Nalliyankara","Badagara","Puduppanam","Kottakkal","Kizhur","Tikkoti","Moodady","Thikkodi(Kodikkal)","Kadalur Pt","Quilandy/Koloth(Defunct)","Kollam","Poilkavu","Chemancheri","Kappad","Elathur","Elattur","PuthiyappaFH","Puthengadi/Paravanna","Kunduparabu","Nadakkavu","Vellayil","Calicut","VadakkeKadappuram","BeyporeFH","Ramanattukara","Chaliyam","Beypore","Kadalundinagaram","Parapanangadi","Parappanangadi","Thanur","Tanur","Nagaram","Paravannangadi","Vakkad","Koottayi","Purattur","Ponnani","Veliyangod","Palappetty","Attupuram","Mannalamkunnu","Vayilattu","Panchavadi","Edakazhiyur","Blangad","Chavakkad","Mullassheri","Vadanappally","Thalikulam","Nattika","Kazhimbram","Edamuttam","Palapetty","KaipamangalamVanchipura","PeinjanamAraattukadavu","Kulimuttam","Kara","Pullut","Eriyad(Chelarappa)","Kodungallur","MunambamFH","Munambam","Manakodam","Kuzhuppilly","Cherai","Edvankad","Edavanakad","Vadakkal","Puthenkadappuram","Narakkal","Nayarambalam","Malipuram","Ernakulam","Murikumpadam","Kalamukku","Vypeen","Valarpadam","FortKochi","Kochi","Chillickal","Puthenthodu(Kannamali)","Maruvakad","Chellanum","Pallithodu","Palithodu","Manakkodam","Thykal","Arthunkal/Chennavely","Aratungal","Chethy","Kottamkulangara","Pollethai","Thumpolly","Thazhampally","Alleppey","AlleppeyBeach","Kalarkod","Punnappra","Punnappira","Valanjavazhy","Ambalapuzha","Purakkad","Porakad","Thottappally","Thrikunnapuzha","Trikkunnapuzha","Padiyamkara Tekku","Ramancheri Tura","AzheekalJetty","Alappattu","Cheriazheekal","Kovilthottam","Chavara","Puthenthura","Vettuthura","Neendakara","Sakthikulangara","Thankassery F.H","QuilonPort","Quilon","Wadi","Moothakara","Pallithottam","Eravipuram","Tanni","Pozhikkara","Pozhikara","Paravoor","Edava","Kappil","Edaval","Vettoor","Vettur","Chilakkoor","Arivalam&Rathikkal","Mampally","AnjengoNorth","Anjengo","AnjengoSouth","Poothura","Perumathura","Perumatura","Puthukurichi","Puthenthoppu","St.Andrews","Pallithura","Thumba","Valiaveli","Kochuveli","Vell","Vettucaud","Vettucaud","Kannanthura","Kochuthoppu","Trivandrum","Valiathura/ValiathuraPier","Cheriathura","Bheemapally","Poonthura","Tiruvallam","PanathuraSouth","Kovalad","Vizhinjam&Kottapuram","Vilinjam","VizhinjamNorth","Mariyanadu","Adimalathura","Puthiathura(Kochupally)","Karichal","Puthiathura(Chinnamarthandanthura)","Kochuthura","Poovar","Puvar"};
	char* Andaman[1000]={"Landfall","Narcondam","Diglipur","Laxmipur,Diglipur","ArealBay,Diglipur","Durgapur","Kalipur,Diglipur","Kalighat,Diglipur","Pokadera","Mayabunderproper","Webi,Mayabunder","Tugapur,Mayabunder","Betapur(RRO)","Rangat Bay","KaushalyaNagar","Dashratpur","Yerrata","Long Island","Elphinstone Hr","Uttara","OralKatcha","Barren","Havelock","Middle Strait","ShoalBay","Wrightmyo","Neil Island","Port Blair","Bambooflat","Haddo","Hope Town","Dunduspoint","Phoenix Bay","Junglighat","Dignabad","Mt Haughton","Lohabarrack","Chouldari","Wandoor","Chidiyatapu","Rutland","Cinque Island","Tambe-e-bul","Vivekanandpur,LittleAndaman","RamaKrishnaPur","Kwate-tu-Kwage","Harminder Bay","Machidera(Hutbay)","Benyaboi","Tula","Tochangeou"};





	// Use current time as
	// seed for random generator
	srand(time(0));
		srand(time(0));
		for(m=0;m<10;m++)
		{
			 for(j=0;j<16;j++)
{
	anum[j]=sync[k];
	k++;
	//printf("%d ", anum[j]);
}

		for (i = 16; i < 236; i++)
		{
		num[i] = rand() % 2;
		//	printf("%d ", num[i]);
			anum[j]=num[i];
			j++;
		}
	printf("\n");



k=0;
for (j = 0; j < 236; j++)
	{
num2[z]=anum[j];
z++;
}

}
for(y=0;y<708;y++)
{

printf("%d",num2[y]);
}
printf("\n");
int n=0;
for(n=0;n<3;n++){
x=0;
for(y=41+236*n;y<=44+236*n;y++)
{
reg[x]=num2[y];
x++;
}
printf("\n");
for(x=0;x<4;x++)
{
//printf("%d",reg[x]);
}
//region
int x1=3,region=0;
for(x=0;x<4;x++){

reg[x]=reg[x]*pow(2,x1);
x1--;
region +=reg[x];
}

//printf("region=%d",region);


for(y=45+236*n;y<=52+236*n;y++)
{
site[x]=num2[y];
x++;
}

//printf("\n");

for(x=0;x<8;x++)
{
//printf("%d",site[x]);
}



//site1
int p=7;
site1=0;
for(x=0;x<8;x++){

site[x]=site[x]*pow(2,p);
p--;
site1 +=site[x];
}


//printf("site1=%d",site1);


//site2
x=0;
for(y=53+236*n;y<=60+236*n;y++)
{
sit2[x]=num2[y];
x++;
}


for(x=0;x<8;x++)
{
//printf("%d",sit2[x]);
}



int p1=7;
site2=0;
for(x=0;x<8;x++){

sit2[x]=sit2[x]*pow(2,p1);
p1--;
site2 +=sit2[x];
}
//printf("site2=%d",site2);

//waveheightmin
printf("\n");
x=0;
for(y=61+236*n;y<=68+236*n;y++)
{
whmi[x]=num2[y];
x++;
}

for(x=0;x<8;x++)
{
//printf("%d",whmi[x]);
}
//printf("\n");

int p2=7;
waveheightmin=0;
for(x=0;x<8;x++){

whmi[x]=whmi[x]*pow(2,p2);
p2--;
waveheightmin +=whmi[x];
}
//printf("waveheightmin=%d",waveheightmin);

//waveheightmax

//printf("\n");
x=0;
for(y=69+236*n;y<=76+236*n;y++)
{
whma[x]=num2[y];
x++;
}

for(x=0;x<8;x++)
{
//printf("%d",whma[x]);
}
printf("\n");

int p3=7;
waveheightmax=0;
for(x=0;x<8;x++){

whma[x]=whma[x]*pow(2,p3);
p3--;
waveheightmax +=whma[x];
}
//printf("waveheightmax=%d",waveheightmax);

//currentspeedmin

printf("\n");
x=0;
for(y=77+236*n;y<=82+236*n;y++)
{
csmi[x]=num2[y];
x++;
}

for(x=0;x<6;x++)
{
//printf("%d",csmi[x]);
}
//printf("\n");

int p4=6;
currentspeedmin=0;
for(x=0;x<8;x++){

csmi[x]=csmi[x]*pow(2,p4);
p4--;
currentspeedmin +=csmi[x];
}
//printf("currentspeedmin=%d",currentspeedmin);

//currentspeedmax

printf("\n");
x=0;
for(y=83+236*n;y<=88+236*n;y++)
{
csma[x]=num2[y];
x++;
}

for(x=0;x<6;x++)
{
//printf("%d",csma[x]);
}
printf("\n");

int p5=6;
currentspeedmax=0;
for(x=0;x<8;x++)
{

csma[x]=csma[x]*pow(2,p5);
p5--;
currentspeedmax +=csma[x];
}
//printf("currentspeedmax=%d",currentspeedmax);


printf("\n");
printf("In %s coast between ",states[region]);






	if(region==0)
		{
		printf("%s and %s \n",Gujarat[site1],Gujarat[site2]);

	    }
	    if(region==1)
	    {
	    printf("%s and %s \n ",Maharashtra[site1],Maharashtra[site2]);

		}
		if(region==2)
	    {
	    printf("%s and %s \n",Goa[site1],Goa[site2]);
		}
		if(region==3)
	    {
	    printf("%s and %s \n",Karnataka[site1],Karnataka[site2]);
	    }
	    if(region==4)
	    {
	    printf("%s and %s \n",Kerala[site1],Kerala[site2]);
	    }
	     if(region==5)
	    {
	    printf("%s and %s \n",SouthTamilnadu[site1],SouthTamilnadu[site2]);
	    }
	     if(region==6)
	    {
	    printf("%s and %s \n",NorthTamilnadu[site1],NorthTamilnadu[site2]);
	    }
	     if(region==7)
	    {
	    printf("%s and %s \n",NorthAndhraPradesh[site1],NorthAndhraPradesh[site2]);
	    }
	     if(region==8)
	    {
	    printf("%s and %s \n",SouthAndhraPradesh[site1],SouthAndhraPradesh[site2]);
	    }
	     if(region==9)
	    {
	    printf("%s and %s \n",Odisha[site1],Odisha[site2]);
	    }

	     if(region==10)
	    {
	    printf("%s and %s \n",WestBengal[site1],WestBengal[site2]);
	    }
	    if(region==11)
	    {
	    printf("%s and %s \n",Andaman[site1],Andaman[site2]);
	    }

	    if(region==12)
	    {
	    printf("%s and %s \n",Nicobar[site1],Nicobar[site2]);
	    }
	    if(region==13)
	    {
	    printf("%s and %s \n",Lakshadeep[site1],Lakshadeep[site2]);
	    }


	R1=waveheightmin/T;
			R2=waveheightmax/T;
		printf("wave height= %f m - %f m \n",R1,R2);

			sp1=currentspeedmin/T;
		sp2=currentspeedmax/T;


		printf("current speed=%f - %f m/sec  \n", sp1,sp2);

		x=0;
		for(y=89+236*n;y<=93+236*n;y++)
{
DD[x]=num2[y];
x++;
}

for(x=0;x<5;x++)
{
//printf("%d",DD[x]);
}
//printf("\n");

int p6=4;
DD1=0;
for(x=0;x<5;x++){
DD[x]=DD[x]*pow(2,p6);
p6--;
DD1+=DD[x];
}
if(DD1>30){

DD1=21;
}
//printf("\n");

//MM
x=0;

for(y=94+236*n;y<=97+236*n;y++)
{
MM[x]=num2[y];
x++;
}

for(x=0;x<4;x++)
{
//printf("%d",MM[x]);
}
//printf("\n");

int p7=3;
MM1=0;
for(x=0;x<4;x++){
MM[x]=MM[x]*pow(2,p7);
p7--;
MM1+=MM[x];
}
if((MM1<0)||(MM1>12)){

MM1=8;
}

x=0;

for(y=98+236*n;y<=104+236*n;y++)
{
YY[x]=num2[y];
x++;
}

for(x=0;x<7;x++)
{
//printf("%d",YY[x]);
}
//printf("\n");

int p8=6;
YY1=0;
for(x=0;x<7;x++){
YY[x]=YY[x]*pow(2,p8);
p8--;
YY1+=YY[x];
}
if(YY1>=99)
{
YY1=99;
}


//HH
x=0;

for(y=105+236*n;y<=109+236*n;y++)
{
HH[x]=num2[y];
x++;
}

for(x=0;x<5;x++)
{
//printf("%d",HH[x]);
}
//printf("\n");

p=4;
HH1=0;
for(x=0;x<5;x++){
HH[x]=HH[x]*pow(2,p);
p--;
HH1=(HH1)+HH[x];
}
if(HH1>24){

HH1=24;
}

//MIN
x=0;

for(y=110+236*n;y<=115+236*n;y++)
{
Min[x]=num2[y];
x++;
}

for(x=0;x<6;x++)
{
//printf("%d",Min[x]);
}
//printf("\n");

p1=5;
Min1=0;
for(x=0;x<6;x++){
Min[x]=Min[x]*pow(2,p1);
p1--;
Min1+=Min[x];
}
if((Min1<0)||(Min1>60)){

Min1=34;
}

//printf("\n");
//validity

val=num2[116+236*n];
if(val==1)
{

printf("warning is valid for 48 hrs");
DD2=DD1+2;
}
else
{
printf("warning is valid for 24 hrs");
DD2=DD1+1;
}

printf("\n");
printf("duration=%d-%d-%d  %d-%d hrs to %d-%d-%d  %d-%d hrs",DD1,MM1,YY1,HH1,Min1,DD2,MM1,YY1,HH1,Min1);
x=0;
for(y=117+236*n;y<=118+236*n;y++)
{
msgtxt[x]=num2[y];
x++;
}

for(x=0;x<2;x++)
{
//printf("%d",msgtxt[x]);
}
printf("\n");
int p9=1;
msgtxt1=0;
for(x=0;x<2;x++){

msgtxt[x]=msgtxt[x]*pow(2,p9);
p9--;
msgtxt1 +=msgtxt[x];
}
//printf("%d\n",msgtxt1);
if(msgtxt1==0)
printf("Fishermen not to venture into open seas");
else if(msgtxt1==1)
printf("fishermen at sea not to come to the ports in the coast");
else if(msgtxt1==2)
printf("Fishermen to be cautious while going out in the sea");
else
printf("fishermen are advised to return to the coast");


	}

    return 0;
}



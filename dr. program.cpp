#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class display
{
public:
	void statup()
	{
		cout << "				*****Doctor Program*****\n";
		cout << "				__________________________" << endl;



	}

};
class head
{
protected:
	int opt;
	int med;

public:
	void setheadache()
	{
		cout << "			Headache disease\n";
		cout << "1.Tension headache\n2.Migraine\n3.Rebound headache\n4.Cluster headache\n5.Thunderclap headache\n";
		cout << "Enter the option : ";
		int a;
		cin >> a;
		opt = a;

	}
	int getopt()
	{
		return opt;
	}
	void setopt(int m)
	{
		if (m == 1)
		{
			cout << "tension headache :\n";
			cout << "Tension headaches normally begin slowlyand gradually in the middle of the day.\n";

			cout << "Symptoms :\n";
			cout << "There may be general, mild to moderate pain that can feel like a band around the head.\n They tend to affect both sides of the head.as pain spread to or from the neck\n";

		}
		else if (m == 2)
		{
			cout << "migraines:\n";
			cout << "A migraine headache may cause a pulsating, throbbing pain usually only on one side of the head.\n The aching may be accompanied by :\n";
			cout << "blurred vision\n";
			cout << "light - headedness\n";
			cout << "nausea\n";
			cout << "sensory disturbances known as auras\n";

			cout << "\n\nFor doctor suggested medicine \n";

		}
		else if (m == 3)
		{
			cout << "Rebound headache :\n";
			cout << "Rebound or medication - overuse headaches stem from an excessive use of medication to treat headache symptoms.\n";
			cout << "	Along with the headache itself, rebound headaches can cause :\n";
			cout << "neck pain\n";
			cout << "	restlessness\n";
			cout << "a feeling of nasal congestion\n";
			cout << "	reduced sleep quality\n";
			cout << "	Rebound headaches can cause a range of symptoms, and the pain can be different each day\n";

		}
		else if (m == 4)
		{
			cout << "Cluster headaches : \n";
			cout << "Cluster headaches usually last between 15 minutes and 3 hours, and they occur suddenly once per day up to eight times per day for a period of weeks to months.\n";
			cout << "	The pain caused by cluster headaches is : \n";
			cout << "•	one - sided\n";
			cout << "	•	severe\n";
			cout << "	•	often described as sharp or burning\n";
			cout << "	•	typically located in or around one eye\n";

		}
		else if (m == 5)
		{
			cout << "Thunderclap headache :\n";
			cout << "The pain grabs your attention in the same way a clap of thunder does.\n";
			cout << "You can feel pain anywhere on your head or neck\n";
			cout << "Symptoms :\n";
			cout << "The pain grabs your attention in the same way a clap of thunder does.\n";
			cout << "You can feel pain anywhere on your head or neck.\n";
			cout << "ou might also have several other symptoms, including :\n";
			cout << "•	Changes in vision\n";
			cout << "•	Confusion\n";
			cout << "•	Nausea\n";
			cout << "•	Numbness\n";
			cout << "•	Vomiting\n";
			cout << "•	Weakness\n";
			cout << "•	Fever\n";
			cout << "•	Seizures\n";

		}


	}
	void medicine()
	{
		cout << "If you want to see doctor suggested medicine then enter 1: ";
		int i;
		cin >> i;
		if (i == 1)
		{
			if (opt == 1)
			{
				cout << "Simple OTC pain relievers are usually the first line of treatment for reducing headache pain.\n";
				cout << "	These include the drugs aspirin, ibuprofen(Advil, Motrin IB, others) and naproxen(Aleve).\n";
			}
			else if (opt == 2)
			{
				cout << "ibuprofen	\n";
				cout << "aspirin + acetaminophen + caffeine	Excedrin Migraine, Excedrin, Goody's\n";
				cout << "acetaminophen	\n";
				cout << "naproxen\n";
			}
			else if (opt == 3)
			{
				cout << "	triptans or dihydroergotamine\n";
			}
			else if (opt == 4)
			{
				cout << "The injectable form of sumatriptan (Imitrex)\n";
			}
			else if (opt == 5)
			{
				cout << "If the thunderclap headache is caused by spasms in the brain's blood vessels, IV or oral nimodipine (Nimotop or Nymalize\n";
			}
		}

		else { EXIT_FAILURE; }

	}

};
class lung
{
private:
	int opt;
	int med;
public:
	void setlungs()
	{
		cout << "			*****Lung Disease***** " << endl;
		cout << "1.Asthma \n2.COPD \n3.Ephisema \n4.Acute Bronchitis\n5.Systetic Fibroses \n";
		cout << "Enter your option:";
			int a;
		cin >> a;
		opt = a;

	}
	int getopt()
	{
		return opt;
	}
	void setopt(int s)
	{
		if (s == 1)
		{
			cout << "symptoms\n";
				cout << "Shortness of breath.\n";
				cout << "Chest tightness or pain.\n";
				cout << "Trouble sleeping caused by shortness of breath, coughing or wheezing.\n";
				cout << "A whistling or wheezing sound when exhaling(wheezing is a common sign of asthma in children)\n";

		}
		else if (s == 2)
		{
			cout << "Shortness of breath, especially during physical activities.\n";
			cout << "Wheezing.\n";
			cout << "Chest tightness.\n";
			cout << "Having to clear your throat first thing in the morning, due to excess mucus in your lungs\n";
			cout << "A chronic cough that may produce mucus(sputum) that may be clear, white, yellow or greenish.\n";

		}
		else if (s == 3)
		{
			cout << "frequent lung infections.\n";
			cout << "a lot of mucus.\n";
			cout << "wheezing.\n";
			cout << "reduced appetiteand weight loss.\n";
			cout << "fatigue.\n";
			cout << "blue - tinged lips or fingernail beds, or cyanosis, due to a lack of oxygen.\n";
			cout << "anxietyand depression.\n";
			cout << "sleep problems.\n";

		}
		else if (s == 4)
		{
			cout<<"Cough.\n";
				cout << "Production of mucus(sputum), which can be clear, white, yellowish - gray or green in color — rarely, it may be streaked with blood.\n";
				cout << "Fatigue\n";
				cout << "Shortness of breath.\n";
				cout << "Slight feverand chills.\n";


		}
		else if (s == 5)
		{
			cout << "Very salty - tasting skin.\n";
				cout << "Persistent coughing, at times with phlegm.\n";
				cout << " lung infections including pneumonia or bronchitis.\n";
				cout << " or shortness of breath.\n";
				cout << "Poor growth or weight gain in spite of a good appetite.\n";
		}

	}
	void medicine()
	{
		cout << "If you want to get medication about this disease then press 1: ";
		int g;
		cin >> g;
		if (g == 1)
		{
			if (getopt() == 1)
			{

				cout << "Albuterol(ProAir HFA, Proventil HFA, Ventolin HFA)\n";
				cout << "Levalbuterol(Xopenex HFA)\n";
				cout << "Metaproterenol.\n";
				cout << "Terbutaline.\n";
			}
			else if (getopt() == 2)
			{
				cout << "aclidinium(Tudorza)\n";
				cout << "arformoterol(Brovana)\n";
				cout << "formoterol(Foradil, Perforomist)\n";
				cout << "glycopyrrolate(Seebri Neohaler)\n";
				cout << "indacaterol(Arcapta)\n";
				cout << "olodaterol(Striverdi Respimat)\n";
				cout << "salmeterol(Serevent)\n";
			}
			else if (getopt() == 3)
			{

				cout << "Tiotropium inhaler.\n";
				cout << "Salmeterol inhaler.\n";
				cout << "Formoterol inhaler.\n";
				cout << "Arformoterol inhaler.\n";
				cout << "Indacaterol inhaler.\n";
				cout << "Aclidinium inhaler.\n";

			}
			else if (getopt() == 4)
			{
				cout << "aspirin, acetaminophen, or ibuprofen can help relieve\n";
			}
			else if (getopt() == 5)
			{
				cout << "edications used to treat patients with cystic fibrosis may include pancreatic enzyme supplements,\n";
				cout << "multivitamins(particularly fat - soluble vitamins), \n";
				cout << "mucolytics, antibiotics(including inhaled, oral, or parenteral),\n";
				cout << "bronchodilators, anti - inflammatory agents, and CFTR potentiators\n";
			}
		}
	}


};
int main()
{
	cout << "				*****Doctor Program*****\n";
	cout << "				__________________________" << endl;
	head w;
	w.setheadache();
	w.getopt();
	w.setopt(w.getopt());
	w.medicine();

	cout << endl << endl;
	lung l;
	l.setlungs();
	l.getopt();
	l.setopt(l.getopt());
	l.medicine();




	system("pause");
}
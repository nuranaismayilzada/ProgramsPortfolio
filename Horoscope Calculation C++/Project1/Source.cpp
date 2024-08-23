#include<iostream>
using namespace std;
void main ()
{
	enum Months{ Yanvar = 1, Fevral, Mart, Aprel,May,Iyun,Iyul,Avqust,Sentyabr,Oktyabr,Noyabr,Dekabr };
	int month,day;
	cout << "Ayi daxil edin:";
	cin >> month;
	cout << "Gunu daxil edin:";
	cin >> day;
	switch (month)
	{
	case Yanvar:
		if (day>0 && day<20)
		{
			cout << "Oglaq burcu" << endl;
		}
		else if (day>19 && day<32) {
			cout << "Dolca burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Fevral:
		if (day > 0 && day < 19)
		{
			cout << "Dolca burcu" << endl;
		}
		else if (day > 18 && day < 30) {
			cout << "Baliqlar burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Mart:
		if (day > 0 && day < 21)
		{
			cout << "Baliqlar burcu" << endl;
		}
		else if (day > 20 && day < 32) {
			cout << "Qoc burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Aprel:
		if (day > 0 && day < 20)
		{
			cout << "Qoc burcu" << endl;
		}
		else if (day > 19 && day < 32) {
			cout << "Buga burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case May:
		if (day > 0 && day < 21)
		{
			cout << "Buga burcu" << endl;
		}
		else if (day > 20 && day < 32) {
			cout << "Ekizler burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Iyun:
		if (day > 0 && day < 21)
		{
			cout << "Ekizler burcu" << endl;
		}
		else if (day > 20 && day < 32) {
			cout << "Xerceng burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Iyul:
		if (day > 0 && day < 23)
		{
			cout << "Xerceng burcu" << endl;
		}
		else if (day > 22 && day < 32) {
			cout << "Sir burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Avqust:
		if (day > 0 && day < 23)
		{
			cout << "Sir burcu" << endl;
		}
		else if (day > 22 && day < 32) {
			cout << "Qiz burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Sentyabr:
		if (day > 0 && day < 23)
		{
			cout << "Qiz burcu" << endl;
		}
		else if (day > 22 && day < 32) {
			cout << "Terezi burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Oktyabr:
		if (day > 0 && day < 23)
		{
			cout << "Terezi burcu" << endl;
		}
		else if (day > 22 && day < 32) {
			cout << "Eqreb burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Noyabr:
		if (day > 0 && day < 22)
		{
			cout << "Eqreb burcu" << endl;
		}
		else if (day > 21 && day < 32) {
			cout << "Oxatan burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	case Dekabr:
		if (day > 0 && day < 22)
		{
			cout << "Oxatan burcu" << endl;
		}
		else if (day > 21 && day < 32) {
			cout << "Oglaq burcu" << endl;
		}
		else {
			cout << "Gun duzgun daxil edilmeyib bele bir gun formati yalnisdir.";
		}
		break;
	default:
		cout << "Bele bir formatda ay movcud deyil.";
		break;
	}

}
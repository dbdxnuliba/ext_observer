#ifndef OBSERVERS_DYN_H
#define OBSERVERS_DYN_H 


// If index -1, return id of the new observer, else update existant

int configMomentumObserver(int index, double k[6]);

int configDisturbanceObserver(int index, double sigma, double xeta, double beta);

int configSlidingModeObserver(int index, double T1[6], double S1[6], double T2[6], double S2[6]);

int configDistKalmanObserver(int index, double S[6*6], double H[6*6], double Q[12*12], double R[6*6]);

int configFilterDynObserver(int index, double cutOff, double dt);

// Get external torque estimation
int getExternalTorque(int index, double ext[6], double q[6], double qd[6], double tau[6], double dt); 

// reset observer state
void reset(int index);

// clear memory
void freeAll();


#endif // OBSERVERS_DYN_H

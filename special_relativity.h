#ifndef SPECIALRELATIVITY_H
#define SPECIALRELATIVITY_H

namespace SpecialRelativity{
	class special_relativity {
	private:
		double velocity;
		double velocity_observer;
		const double speed_of_light = 1;
		const double speed_of_light_m = 299792458;
		double momentum;
		double mass;
		double energy;
		double x;
		double frequency;
		double frequency_sol;
		double wavelength;
		double wavelength_sol;

	public:
		void Momentum();
		void massless_energy();
		void Energy();
		void doppler_effect();
		void doppler_effect_wavelength();
		double gamma(double);
		void velocity_transforms();
		friend class Exception;
	};


}


#endif // !SPECIALRELATIVITY_H



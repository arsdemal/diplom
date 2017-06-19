struct cpuidle_device {
	unsigned int 	cpu;
	int 		last_residency;
	int 		state_count;
	struct 		cpuidle_statestates[CPUIDLE_STATE_MAX];
	struct 		cpuidle_state*last_state;

	void* 		governor_data;
	struct 		cpuidle_state*safe_state;
	/* Others omitted */
};	

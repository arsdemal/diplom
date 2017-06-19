    struct cpuidle_state {
	char		name[CPUIDLE_NAME_LEN];
	char		desc[CPUIDLE_DESC_LEN];
	void		*driver_data;

	unsigned int	flags;
	unsigned int	exit_latency; /* in US */
	unsigned int	power_usage; /* in mW */
	unsigned int	target_residency; /* in US */

	unsigned long long	usage;
	unsigned long long	time; /* in US */

	int (*enter)	(struct cpuidle_device *dev,
			 struct cpuidle_state *state);
    };

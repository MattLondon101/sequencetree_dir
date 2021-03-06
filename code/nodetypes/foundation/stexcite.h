/* BEGIN EXCLUDE */
/* END EXCLUDE */

class STExcite : public STNode {
public:
	/* BEGIN SEQUENCETREE -- this section generated by SequenceTree -- do not edit */
	STVector3 gradient_amplitude;
	STReal slice_thickness;
	STReal bandwidth;
	STInteger prephase;
	STGradientMom *Prephase;
	STGradientAmp *SliceGradient;
	STRF *RF;
	/* END SEQUENCETREE -- this section generated by SequenceTree -- do not edit */
	STExcite();
	bool prepare();
	Vector3 terminalMoment();
	double duration();
};


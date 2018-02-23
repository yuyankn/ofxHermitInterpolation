#ifndef _OFX__HERMIT_INTERPORATION_H_
#define _OFX__HERMIT_INTERPORATION_H_
#include "ofMain.h"
class ofxHermitInterpolation {
	ofPoint pStart, pEnd;
	ofVec2f vStart, vEnd;
public:
	void setStartPoint(const ofPoint& p, const ofVec2f& v) {
		pStart = p;
		vStart = v;
	}
	void setEndPoint(const ofPoint& p, const ofVec2f& v) {
		pEnd = p;
		vEnd = v;
	}
	ofPoint getPoint(float t) {
		float k = ofClamp(t, 0.0f, 1.0f);
		float s[3] = { k*k*k,k*k,k };
		float mx[4] = { pStart.x, vStart.x, pEnd.x, vEnd.x };
		float my[4] = { pStart.y, vStart.y, pEnd.y, vEnd.y };

		float x = ((2 * mx[0]) + (mx[1]) - (2 * mx[2]) + (mx[3]))*s[0] +
			((-3 * mx[0]) - (2 * mx[1]) + (3 * mx[2]) - (mx[3]))*s[1] +
			(mx[1])*s[2] + (mx[0]);
		float y = ((2 * my[0]) + (my[1]) - (2 * my[2]) + (my[3]))*s[0] +
			((-3 * my[0]) - (2 * my[1]) + (3 * my[2]) - (my[3]))*s[1] +
			(my[1])*s[2] + (my[0]);

		return ofPoint(x, y);
	}
};
#endif
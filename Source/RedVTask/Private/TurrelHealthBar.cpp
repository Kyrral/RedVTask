#include "TurrelHealthBar.h"

void UTurrelHealthBar::onHealthChanged(float newTurelHealth)
{
	progressBar->SetPercent(newTurelHealth / 50);
}
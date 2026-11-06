
/* JUS-SDK SND_IsCaptureActive [behavioral] returns SNDCAPxCNT (0x04000508 + n) bit 7 */

bool SND_IsCaptureActive(int param_1)

{
                    /* JUS-TAG hw={"SOUND":1} io=["04000508"] */
  return ((&DAT_04000508)[param_1] & 0x80) != 0;
}


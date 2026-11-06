
/* JUS-SDK SND_Shutdown [behavioral] SND_Disable, SND_StopChannel on all 16 channels, capture
   control 0x04000508/09 = 0 */

void SND_Shutdown(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SOUND":2} io=["04000508","04000509"] */
  SND_Disable();
  iVar1 = 0;
  do {
    SND_StopChannel(iVar1,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  DAT_04000508 = 0;
  DAT_04000509 = 0;
  return;
}


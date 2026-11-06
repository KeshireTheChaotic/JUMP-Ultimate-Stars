
/* JUS-SDK GX_DisableBankForBG [behavioral] tail-calls disableBankForX_ with the manager field
   0x020afba2, which GX_SetBankForBG updates */

void GX_DisableBankForBG(void)

{
  disableBankForX_(&DAT_020afba2);
  return;
}



/* JUS-SDK GX_ResetBankForTex [behavioral] tail-calls resetBankForX_ with the manager field
   0x020afba8, which GX_SetBankForTex updates */

void GX_ResetBankForTex(void)

{
  resetBankForX_(&DAT_020afba8);
  return;
}


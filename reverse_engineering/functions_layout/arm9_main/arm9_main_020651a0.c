
/* JUS-SDK GX_DisableBankForOBJ [behavioral] tail-calls disableBankForX_ with the manager field
   0x020afba4, which GX_SetBankForOBJ updates */

void GX_DisableBankForOBJ(void)

{
  disableBankForX_(&DAT_020afba4);
  return;
}



/* JUS-SDK GX_DisableBankForSubOBJ [behavioral] tail-calls disableBankForX_ with the manager field
   0x020afbb4, which GX_SetBankForSubOBJ updates */

void GX_DisableBankForSubOBJ(void)

{
  disableBankForX_(&DAT_020afbb4);
  return;
}


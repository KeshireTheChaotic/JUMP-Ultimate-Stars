
uint FUN_02068578(int param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["FREESPOTNINTENDOWFC"] */
  uVar1 = FUN_02068404();
  iVar2 = param_1 + 0x300 + uVar1 * 0x24;
  if (((*(byte *)(param_1 + 0xd0c) & 0xf) == 0) || ((*(byte *)(param_1 + 0xd0c) & 0xf) == 6)) {
    FUN_02051890(s_Wayport2FREESPOTNINTENDOWFC_020922b8 + 8,iVar2 + 4,8);
    *(undefined1 *)(iVar2 + 3) = 8;
    *(undefined1 *)(iVar2 + 1) = 8;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}


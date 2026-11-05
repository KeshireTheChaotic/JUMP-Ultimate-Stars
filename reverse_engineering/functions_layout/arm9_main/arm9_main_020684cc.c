
uint FUN_020684cc(int param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["NINTENDOWFC","NWCUSBAP","Wayport2FREESPOTNINTENDOWFC"] */
  uVar1 = FUN_02068404();
  iVar2 = param_1 + 0x300 + uVar1 * 0x24;
  if (((*(byte *)(param_1 + 0xd0c) & 0xf) == 0) || ((*(byte *)(param_1 + 0xd0c) & 0xf) == 4)) {
    FUN_02051890(s_NWCUSBAP_0209dd44,iVar2 + 4,8);
    *(undefined1 *)(iVar2 + 3) = 8;
    *(undefined1 *)(iVar2 + 1) = 6;
    uVar1 = uVar1 + 1 & 0xff;
    iVar2 = iVar2 + 0x24;
  }
  if (((*(byte *)(param_1 + 0xd0c) & 0xf) == 0) || ((*(byte *)(param_1 + 0xd0c) & 0xf) == 7)) {
    FUN_02051890(s_Wayport2FREESPOTNINTENDOWFC_020922b8,iVar2 + 4,8);
    *(undefined1 *)(iVar2 + 3) = 8;
    *(undefined1 *)(iVar2 + 1) = 9;
    uVar1 = uVar1 + 1 & 0xff;
    iVar2 = iVar2 + 0x24;
  }
  if (((*(byte *)(param_1 + 0xd0c) & 0xf) == 0) || ((*(byte *)(param_1 + 0xd0c) & 0xf) == 8)) {
    FUN_02051890(s_Wayport2FREESPOTNINTENDOWFC_020922b8 + 0x10,iVar2 + 4,0xb);
    *(undefined1 *)(iVar2 + 3) = 0xb;
    *(undefined1 *)(iVar2 + 1) = 10;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}



undefined4 FUN_020685c4(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG strings=["FREESPOTNINTENDOWFC"] */
  iVar1 = FUN_020673ec(0x10);
  if ((((*(byte *)(iVar1 + 0xd0c) & 0xf) == 0) || ((*(byte *)(iVar1 + 0xd0c) & 0xf) == 6)) &&
     (iVar1 = FUN_02004cec(param_1 + 0xc,s_Wayport2FREESPOTNINTENDOWFC_020922b8 + 8,8), iVar1 == 0))
  {
    return 8;
  }
  return 0;
}


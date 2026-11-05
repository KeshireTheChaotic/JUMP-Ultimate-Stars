
void FUN_02194580(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  puVar1 = (undefined1 *)(*DAT_021a84fc)(0x83);
  if (puVar1 == (undefined1 *)0x0) {
    *(undefined1 *)(iVar2 + 0x455) = 9;
    return;
  }
  *puVar1 = 0x14;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 1;
  puVar1[5] = 1;
  FUN_020517fc(iVar2 + 0x1cc,0,8);
  puVar1[6] = 0x16;
  puVar1[7] = 3;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0x28;
  puVar1[0xb] = 0x14;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0x24;
  FUN_02051890(iVar2 + 0x3a4,iVar2 + 0x3fc,0x58);
  FUN_02195134(iVar2,puVar1 + 0xf,0);
  FUN_02051890(iVar2 + 0x3fc,iVar2 + 0x3a4,0x58);
  FUN_02051890(iVar2 + 0x2ec,iVar2 + 0x348,0x5c);
  FUN_02195094(iVar2,puVar1 + 0x1f,0);
  FUN_02051890(iVar2 + 0x348,iVar2 + 0x2ec,0x5c);
  FUN_02194c2c(iVar2,puVar1 + 0xb,0x28);
  iVar2 = FUN_02194ca8(iVar2,puVar1 + 6);
  FUN_0218eda0(puVar1,iVar2 + 6,0,0,param_1);
  (*DAT_021a8528)(puVar1);
  return;
}


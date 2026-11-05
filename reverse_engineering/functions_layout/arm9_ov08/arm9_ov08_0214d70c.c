
undefined4 FUN_0214d70c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  int iVar4;
  char local_28 [2];
  short local_26;
  ushort local_24;
  undefined1 auStack_22 [14];
  
  iVar1 = DAT_0216c1d4;
  local_28[0] = '\0';
  local_26 = 0;
  local_24 = 0;
  FUN_0214cf04(DAT_0216c1d4,0,0x5dc);
  puVar3 = (undefined1 *)FUN_0214f2f8(0x210);
  if (puVar3 == (undefined1 *)0x0) {
    FUN_0214e638(2);
    return 0xffffffff;
  }
  FUN_0214cf04(puVar3,0,0x210);
  FUN_0214cf10(&DAT_0216c1d8,param_2,8);
  FUN_0214cf10(auStack_22,&DAT_0216c1d8,8);
  local_26 = FUN_0214d51c(puVar3 + 4);
  if (local_26 < 0) {
    FUN_0214e638(3);
    if (puVar3 != (undefined1 *)0x0) {
      FUN_0214f2e4(puVar3);
    }
    return 0xffffffff;
  }
  *puVar3 = 0;
  uVar2 = FUN_0214ce14(local_26);
  *(undefined2 *)(puVar3 + 2) = uVar2;
  local_26 = local_26 + 4;
  FUN_0214d4c0(0,iVar1 + 0x18,puVar3,&local_26,&local_24,local_28);
  local_24 = local_24 | 0x10;
  iVar4 = FUN_0214d0c8(auStack_22,8,s_MELCO_0216af88,6);
  if (iVar4 == 0) {
    FUN_0214d460(iVar1,0x1000,(int)local_26,(int)(short)local_24,(int)local_28[0],0x11,auStack_22);
    local_26 = local_26 + 0x18;
    FUN_0214d3f8(iVar1,(int)local_26,0xff,param_3);
    if (puVar3 != (undefined1 *)0x0) {
      FUN_0214f2e4(puVar3);
    }
    return 0;
  }
  FUN_0214e638(2);
  if (puVar3 != (undefined1 *)0x0) {
    FUN_0214f2e4(puVar3);
  }
  return 0xffffffff;
}


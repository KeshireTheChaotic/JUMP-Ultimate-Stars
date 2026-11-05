
undefined4 FUN_0214d618(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char local_2c [2];
  short local_2a;
  short local_28;
  undefined1 auStack_26 [10];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined2 local_1a;
  undefined4 local_18;
  
  iVar1 = DAT_0216c1d4;
  local_2c[0] = '\0';
  local_2a = 0;
  local_28 = 0;
  FUN_0214cf04(&local_1c,0,8);
  FUN_0214cf04(iVar1,0,0x5dc);
  local_1c = 2;
  local_1b = 0;
  local_1a = FUN_0214ce14(4);
  local_18 = DAT_0216c1f4;
  local_18 = FUN_0214ce2c();
  local_2a = 8;
  FUN_0214d4c0(DAT_0216c1c0,iVar1 + 0x18,&local_1c,&local_2a,&local_28,local_2c);
  FUN_0214cf10(auStack_26,param_2 + 8,8);
  iVar2 = FUN_0214d0c8(auStack_26,8,s_MELCO_0216af88,6);
  if (iVar2 == 0) {
    FUN_0214d460(iVar1,0x2000,(int)local_2a,(int)local_28,(int)local_2c[0],0x11,auStack_26);
    local_2a = local_2a + 0x18;
    FUN_0214d3f8(iVar1,(int)local_2a,0,param_3);
    return 0;
  }
  FUN_0214e638(2);
  return 0xffffffff;
}


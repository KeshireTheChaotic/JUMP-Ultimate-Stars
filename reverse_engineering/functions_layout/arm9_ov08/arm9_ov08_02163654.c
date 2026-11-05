
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02163654(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int local_34;
  undefined1 local_24 [4];
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c [2];
  
  local_24[0] = DAT_0216ae2c;
  local_24[1] = DAT_0216ae2d;
  local_24[2] = DAT_0216ae2e;
  local_24[3] = DAT_0216ae2f;
  local_20 = DAT_0216ae30;
  local_1f = DAT_0216ae31;
  uVar1 = FUN_02157488(DAT_0216e71c,param_1,param_4,param_5);
  DAT_0216e804 = (undefined4 *)FUN_02166b8c(0x20,4);
  *(char *)(DAT_0216e804 + 7) = (char)param_2;
  *(undefined1 *)((int)DAT_0216e804 + 0x1b) = 0xfe;
  *(char *)((int)DAT_0216e804 + 0x1e) = (char)param_3;
  FUN_0206602c(&DAT_04000050,0x1f,0);
  uVar2 = FUN_02165fc4(0,(&DAT_0216ae1c)[param_2],0);
  *DAT_0216e804 = uVar2;
  FUN_02165bc4(*DAT_0216e804,0xffffffff,0x100);
  FUN_02165b80(*DAT_0216e804,0xffffffff);
  local_34 = 0;
  if ((&DAT_0216ae24)[param_2] != '\0') {
    puVar4 = &DAT_0216ae54 + param_2 * 2;
    iVar3 = 0;
    do {
      uVar2 = FUN_02165fc4(0,*puVar4,0);
      *(undefined4 *)((int)DAT_0216e804 + iVar3 + 8) = uVar2;
      FUN_02165bc4(*(undefined4 *)((int)DAT_0216e804 + iVar3 + 8),0xffffffff,0x100,0);
      FUN_02165b80(*(undefined4 *)((int)DAT_0216e804 + iVar3 + 8),0xffffffff,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 4;
      local_34 = local_34 + 1;
    } while (local_34 < (int)(uint)(byte)(&DAT_0216ae24)[param_2]);
  }
  uVar2 = FUN_02166718(0,0x20,0xc,1,local_1c,0);
  DAT_0216e804[4] = uVar2;
  uVar2 = FUN_02165dcc(0,local_1c[0],0);
  DAT_0216e804[1] = uVar2;
  uVar2 = FUN_02154620();
  FUN_02166408(DAT_0216e804[4],0,0,*(undefined2 *)(&DAT_0216ae74 + param_2 * 4),
               *(undefined2 *)(&DAT_0216ae76 + param_2 * 4),2,uVar2,uVar1);
  FUN_0216639c(DAT_0216e804[4],0x100,0,DAT_0216e804[1],0);
  FUN_021668a8(0,0,0x1f,0);
  FUN_021668a8(0,1,0x1f,local_24[*(byte *)(DAT_0216e804 + 7)]);
  FUN_021668a8(0,3,0x1f,1);
  FUN_021669b0(0,1,&DAT_0216ae34);
  FUN_02163300(0xc0);
  _DAT_04000000 = _DAT_04000000 & 0xffff1fff | 0x6000;
  if (param_3 == 0) {
    uVar1 = FUN_02167814(1,0x2163539,0,0x78);
    DAT_0216e804[5] = uVar1;
    return;
  }
  uVar1 = FUN_02167814(1,0x21635c1,0,0x78);
  DAT_0216e804[5] = uVar1;
  return;
}


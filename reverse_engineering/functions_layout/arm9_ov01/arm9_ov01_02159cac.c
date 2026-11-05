
void FUN_02159cac(int param_1,int param_2,int param_3,undefined4 param_4,undefined2 param_5,
                 ushort param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_38 [32];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  FUN_02159de8(param_2,param_4,param_5,0);
  iVar4 = FUN_02074294(param_2);
  iVar4 = iVar4 * 2;
  if ((*(int *)(param_1 + 0x304) == 1) && (iVar5 = FUN_021571e0(param_1,param_4), iVar5 != 0)) {
    *(undefined1 *)(param_2 + iVar4) = 0xf3;
    *(undefined1 *)(param_2 + iVar4 + 1) = 0xc0;
    *(undefined1 *)(param_2 + iVar4 + 2) = 0;
  }
  thunk_FUN_0207400c(auStack_38,param_3 + 0x40);
  iVar4 = FUN_02074294(auStack_38);
  for (iVar5 = 0; iVar5 < 0xd - iVar4; iVar5 = iVar5 + 1) {
    thunk_FUN_020741c4(auStack_38,&DAT_0216c904);
  }
  thunk_FUN_020741c4(param_2,auStack_38);
  FUN_020769cc(*(undefined4 *)(param_1 + 0x2d0),param_3);
  iVar4 = *(int *)(param_1 + 0x2d0);
  cVar1 = *(char *)(iVar4 + 0x5e0);
  cVar2 = *(char *)(iVar4 + 0x5e2);
  cVar3 = *(char *)(iVar4 + 0x5e1);
  iVar4 = FUN_02074294(param_2);
  iVar4 = iVar4 * 2;
  uVar6 = (uint)param_6;
  iVar5 = uVar6 + (int)cVar1;
  *(char *)(param_2 + iVar4) = (char)((uint)iVar5 >> 8);
  *(char *)(param_2 + iVar4 + 1) = (char)iVar5;
  iVar7 = uVar6 + (int)cVar3;
  *(char *)(param_2 + iVar4 + 2) = (char)((uint)iVar7 >> 8);
  iVar5 = uVar6 + (int)cVar2;
  *(char *)(param_2 + iVar4 + 3) = (char)iVar7;
  *(char *)(param_2 + iVar4 + 4) = (char)((uint)iVar5 >> 8);
  *(char *)(param_2 + iVar4 + 5) = (char)iVar5;
  *(undefined1 *)(param_2 + iVar4 + 6) = 0;
  return;
}


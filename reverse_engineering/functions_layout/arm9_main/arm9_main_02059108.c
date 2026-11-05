
int FUN_02059108(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int iStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  iVar1 = FUN_02057f40(3,2,3,5);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 == (int *)0x0) {
    return 6;
  }
  if (*param_2 == 0) {
    return 6;
  }
  if ((*(ushort *)(param_2 + 1) == 0) || (0xe < *(ushort *)(param_2 + 1))) {
    return 6;
  }
  FUN_02058214(10,param_1);
  uStack_20 = 10;
  uStack_1e = (undefined2)param_2[1];
  iStack_1c = *param_2;
  uStack_18 = *(undefined2 *)((int)param_2 + 6);
  uStack_16 = (undefined1)param_2[2];
  uStack_15 = *(undefined1 *)((int)param_2 + 9);
  uStack_14 = *(undefined1 *)((int)param_2 + 10);
  uStack_13 = *(undefined1 *)((int)param_2 + 0xb);
  uStack_12 = (undefined1)param_2[3];
  uStack_11 = *(undefined1 *)((int)param_2 + 0xd);
  iVar1 = FUN_02058070(&uStack_20,0x10);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}


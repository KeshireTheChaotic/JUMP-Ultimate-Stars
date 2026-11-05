
int FUN_02058f88(undefined4 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined2 uStack_48;
  undefined2 uStack_46;
  int iStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined1 auStack_3c [6];
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined1 auStack_32 [32];
  undefined2 uStack_12;
  
  iVar2 = FUN_02057f40(3,2,3,5);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_2 == (int *)0x0) {
    return 6;
  }
  if (*param_2 == 0) {
    return 6;
  }
  if (0x400 < *(ushort *)(param_2 + 1)) {
    return 6;
  }
  if (0x20 < *(ushort *)((int)param_2 + 0x12)) {
    return 6;
  }
  sVar1 = (short)param_2[4];
  if ((((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) && (sVar1 != 3)) {
    return 6;
  }
  if (((ushort)(sVar1 - 2U) < 2) && (0x20 < *(ushort *)(param_2 + 0xd))) {
    return 6;
  }
  FUN_02058214(0x26,param_1);
  uStack_48 = 0x26;
  uStack_46 = *(undefined2 *)((int)param_2 + 6);
  iStack_44 = *param_2;
  uStack_40 = (undefined2)param_2[1];
  uStack_3e = (undefined2)param_2[2];
  FUN_02051890((int)param_2 + 10,auStack_3c,6);
  uStack_36 = (undefined2)param_2[4];
  uStack_12 = (undefined2)param_2[0xd];
  uStack_34 = *(undefined2 *)((int)param_2 + 0x12);
  FUN_02051890(param_2 + 5,auStack_32,0x20);
  iVar2 = FUN_02058070(&uStack_48,0x3c);
  if (iVar2 == 0) {
    iVar2 = 2;
  }
  return iVar2;
}


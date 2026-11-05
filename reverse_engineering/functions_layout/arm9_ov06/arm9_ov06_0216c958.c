
undefined4 FUN_0216c958(int param_1,int *param_2,int param_3,int *param_4)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)FUN_0216b740(*param_2);
  if ((*(byte *)((int)param_2 + 6) & 8) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x20);
    sVar3 = *(short *)(param_3 + 0x1e);
    cVar2 = *(char *)(param_3 + 0x36);
    iVar5 = *(int *)(*(int *)(*param_2 + 0x10) + 0x5c);
    *(short *)(iVar5 + 0x24) =
         (short)((int)*(char *)(param_3 + 0x35) * (uint)uVar1 * (int)*(short *)(param_3 + 0x1c) >> 8
                );
    *(short *)(iVar5 + 0x26) = (short)((int)cVar2 * (uint)uVar1 * (int)sVar3 >> 8);
  }
  if ((*(byte *)((int)param_2 + 6) & 4) == 0) {
    FUN_0216caf0(*param_2,*piVar4 + *param_4,piVar4[1] + param_4[1]);
  }
  if ((((*(byte *)((int)param_2 + 6) & 2) == 0) &&
      ((*(uint *)(*(int *)(*param_2 + 0x10) + 0x78) & 0xf) != 0)) &&
     (((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x1000) != 0 ||
      (((*(uint *)(*(int *)(*param_2 + 0x10) + 0x38) & 1) != 0 ||
       (iVar5 = FUN_0216ee14(), iVar5 != 0)))))) {
    *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) & 0xfe;
    FUN_02083648(*param_2);
    return 0;
  }
  if ((((*(uint *)(*param_2 + 0x2c) & 8) != 0) ||
      (iVar5 = param_2[1], *(short *)(param_2 + 1) = (short)iVar5 + 1, 0x20 < (short)iVar5)) &&
     ((*(byte *)((int)param_2 + 6) & 2) == 0)) {
    *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) & 0xfe;
    FUN_02083648(*param_2);
    return 0;
  }
  if (*piVar4 < 0x100) {
    *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) & 0xfe;
    FUN_02083648(*param_2);
    return 0;
  }
  if (*piVar4 < 0x3ff01) {
    return 1;
  }
  *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) & 0xfe;
  FUN_02083648(*param_2);
  return 0;
}


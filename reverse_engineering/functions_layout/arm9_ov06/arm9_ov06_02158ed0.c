
undefined4 FUN_02158ed0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = param_2 * 8;
  puVar6 = (undefined4 *)(&DAT_02171168 + iVar1);
  iVar7 = *(int *)(DAT_02172984 + 4) + param_2 * 8;
  uVar5 = (uint)((*(ushort *)(*(int *)(DAT_02172984 + 4) + param_2 * 8) & 0x10) != 0);
  puVar8 = (undefined4 *)(uVar5 * 0x18 + param_1 + 0x7c);
  puVar8[1] = iVar7;
  *(undefined1 *)(puVar8 + 5) = 1;
  *(undefined1 *)((int)puVar8 + 0x15) = 1;
  if (*(short *)(iVar7 + 2) == 0) {
    (*(code *)*puVar6)(param_1,puVar8,(code *)*puVar6,&DAT_02171168,param_4);
  }
  else {
    FUN_0215911c(param_1,uVar5);
    *(short *)(puVar8 + 3) = (short)param_2;
    *(undefined2 *)((int)puVar8 + 0xe) = *(undefined2 *)(iVar7 + 2);
    *(undefined2 *)(puVar8 + 4) = 0;
    sVar3 = FUN_0200d12c(*(undefined2 *)((int)puVar8 + 0xe),10);
    *(short *)((int)puVar8 + 0xe) =
         sVar3 * (short)(*(int *)(DAT_02172960 + *(char *)(param_1 + 0x1e0) * 4 + 0x4c) << 1) +
         *(short *)((int)puVar8 + 0xe);
    iVar7 = (*(code *)*puVar6)(param_1,puVar8);
    if (iVar7 == 0) {
      puVar4 = &LAB_02159258;
    }
    else {
      puVar4 = (undefined1 *)*puVar6;
    }
    *puVar8 = puVar4;
    if (*(char *)((int)puVar8 + 0x15) == '\0') {
      *(undefined2 *)(puVar8 + 3) = 0;
    }
    else if (uVar5 == 1) {
      if (param_2 == 0x17) {
        *(undefined2 *)(param_1 + 0x108) = 0;
        *(ushort *)((int)puVar8 + 0x12) =
             (ushort)*(byte *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x182);
        if ((int)*(char *)(param_1 + 0x1e0) == (int)*(short *)((int)puVar8 + 0x12)) {
          *(undefined2 *)((int)puVar8 + 0x12) = 0xffff;
        }
      }
      iVar7 = *(int *)(param_1 + 0x1a4);
      if ((iVar7 != 0) &&
         (uVar5 = (uint)*(ushort *)(iVar7 + 0x34) + (uint)*(ushort *)((int)puVar8 + 0xe),
         uVar5 < 0xffff)) {
        *(short *)(iVar7 + 0x34) = (short)uVar5;
      }
    }
  }
  if (*(char *)((int)puVar8 + 0x15) != '\0') {
    cVar2 = (&DAT_0217116d)[iVar1];
    if (cVar2 != -1) {
      (**(code **)(**(int **)(puVar8[2] + 4) + 0xd8))(*(int **)(puVar8[2] + 4),1);
      FUN_02023894(*(undefined4 *)(puVar8[2] + 4),cVar2 + 0x2fd000,0);
      (**(code **)(**(int **)(*(int *)(puVar8[2] + 4) + 0x68) + 0x6c))();
    }
    if ((char)(&DAT_0217116e)[iVar1] != -1) {
      FUN_02159b8c(param_1,*(undefined4 *)(&DAT_02171128 + (char)(&DAT_0217116e)[iVar1] * 4));
    }
    if ((&DAT_0217116c)[iVar1] != -1) {
      FUN_0207342c(0x7a);
    }
  }
  return 1;
}



void FUN_02176518(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 local_20;
  
  DAT_02183a38 = &DAT_02183a3c;
  local_20 = param_4;
  FUN_020517fc(&DAT_02183a3c,0,0x2877c);
  iVar3 = FUN_02020d90();
  (**(code **)(**(int **)(iVar3 + 4) + 0x94))(*(int **)(iVar3 + 4),0x80000);
  local_20 = 0x8e000;
  FUN_02172e14(iVar3,&local_20);
  FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_021771d0);
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),DAT_02183a38);
  FUN_02174de4(iVar3,param_1);
  iVar6 = 0;
  *(int *)(DAT_02183a38 + 0x38) = iVar3;
  puVar5 = DAT_02183a38 + 0x63c;
  do {
    FUN_02037b98(DAT_02183a38 + 0x18,puVar5);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 0x48;
  } while (iVar6 < 0x300);
  iVar3 = 0;
  puVar5 = DAT_02183a38 + 0xde3c;
  do {
    FUN_02037b98(DAT_02183a38 + 0x20,puVar5);
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 0x10;
  } while (iVar3 < 0xc0);
  iVar3 = 0;
  puVar5 = DAT_02183a38 + 0xef7c;
  do {
    FUN_02037b98(DAT_02183a38 + 0x28,puVar5);
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 0xc;
  } while (iVar3 < 0x2100);
  iVar3 = 0;
  puVar5 = DAT_02183a38 + 0xea3c;
  do {
    FUN_02037b98(DAT_02183a38 + 0x30,puVar5);
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 0x1c;
  } while (iVar3 < 0x30);
  puVar5 = DAT_02183a38 + 0x3c;
  FUN_02083ab8();
  iVar6 = FUN_0207d2a8();
  for (iVar3 = 0; iVar3 < iVar6; iVar3 = (iVar3 + 1) * 0x10000 >> 0x10) {
    uVar2 = FUN_02083760(iVar3,puVar5 + 0xc);
    puVar5[0x1e] = uVar2;
    iVar4 = FUN_02083acc((int)(char)puVar5[0x1e]);
    if (iVar4 == 0) {
      *(undefined2 *)(puVar5 + 0x1c) = 0xffff;
    }
    else {
      *(short *)(puVar5 + 0x1c) = (short)iVar3;
      iVar4 = FUN_02083aec(iVar3);
      if (iVar4 == 0) {
        *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) & 0xfffffffe;
        FUN_02037b98(DAT_02183a38 + 0x10,puVar5);
      }
      else {
        *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) & 0xfff00000 | 1;
        FUN_02037b98(DAT_02183a38,puVar5);
      }
    }
    puVar5 = puVar5 + 0x20;
  }
  puVar5 = DAT_02183a38 + 0x3c;
  for (iVar3 = 0; iVar3 < iVar6; iVar3 = (iVar3 + 1) * 0x10000 >> 0x10) {
    iVar4 = FUN_02083b0c(iVar3);
    *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) & 0xfffff | 0xfff00000;
    uVar1 = (uint)(short)iVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < iVar6)) {
      *(uint *)(puVar5 + 8) =
           *(uint *)(puVar5 + 8) & 0xfc000000 | *(uint *)(puVar5 + 8) & 0xfffff | 2 |
           (uVar1 & 0x3f) << 0x14;
    }
    iVar4 = iVar4 >> 0x10;
    if ((-1 < iVar4) && (iVar4 < iVar6)) {
      *(uint *)(puVar5 + 8) =
           *(uint *)(puVar5 + 8) & 0x3f00000 | *(uint *)(puVar5 + 8) & 0xfffff | 4 | iVar4 << 0x1a;
    }
    puVar5 = puVar5 + 0x20;
  }
  return;
}



undefined4 FUN_021921bc(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 100);
  uVar1 = OS_DisableInterrupts();
  if ((uint)*(ushort *)(iVar3 + 0x10a) < (uint)*(ushort *)(iVar3 + 0x108) + param_2) {
    DAT_021a9d8c = DAT_021a9d8c + 1;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(DAT_021a9d20 + 0x18))(param_2 + 0xc);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_021a9d88 = DAT_021a9d88 + 1;
    }
    else {
      *(short *)(iVar3 + 0x108) = *(short *)(iVar3 + 0x108) + (short)param_2;
      *puVar2 = 0;
      *(short *)(puVar2 + 1) = (short)param_2;
      *(undefined2 *)((int)puVar2 + 6) = *(undefined2 *)(param_3 + 0x18);
      puVar2[2] = *(undefined4 *)(param_3 + 0x1c);
      FUN_02051890(param_1,puVar2 + 3,param_2);
      if (*(int *)(iVar3 + 0x100) != 0) {
        **(undefined4 **)(iVar3 + 0x100) = puVar2;
      }
      *(undefined4 **)(iVar3 + 0x100) = puVar2;
      if (*(int *)(iVar3 + 0x104) == 0) {
        *(int *)(iVar3 + 0x104) = (int)puVar2;
      }
    }
  }
  if (*(short *)(param_3 + 0x74) == 0) {
    *(undefined2 *)(param_3 + 0x74) = *(undefined2 *)(param_3 + 10);
  }
  *(undefined2 *)(param_3 + 0x18) = *(undefined2 *)(param_3 + 0x1a);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_3 + 0x20);
  FUN_02053210(iVar3 + 0x10c);
  OS_RestoreInterrupts(uVar1);
  return 1;
}


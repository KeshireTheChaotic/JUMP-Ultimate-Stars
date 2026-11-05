
void FUN_02151288(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *(byte *)(*param_1 + 0x51);
  *(byte *)((int)param_1 + 0x23) = bVar1;
  iVar2 = (int)(short)(ushort)bVar1;
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    iVar3 = param_1[3];
    FUN_02023894(*(undefined4 *)(iVar3 + 4),*(byte *)((int)param_1 + 0x23) + 0x50000,0,param_4,
                 param_4);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    FUN_0214f960(iVar3,&DAT_0215c164);
    iVar3 = FUN_02151454(iVar3,0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar3 + 4),&DAT_0215c158,0);
    (**(code **)(**(int **)(param_1[4] + 4) + 0xd8))(*(int **)(param_1[4] + 4),1);
    FUN_02023894(*(undefined4 *)(param_1[4] + 4),*(byte *)(*param_1 + 0x51) + 0x50005,0);
    (**(code **)(**(int **)(*(int *)(param_1[4] + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(param_1[6] + 4) + 0xd8))(*(int **)(param_1[6] + 4),1);
    FUN_0214f960(param_1[6],&DAT_0215c11c + iVar2 * 3);
    (**(code **)(**(int **)(param_1[7] + 4) + 0xd8))(*(int **)(param_1[7] + 4),1);
    FUN_0214f960(param_1[7],&DAT_0215c11c + iVar2 * 3);
    FUN_02023894(*(undefined4 *)(param_1[7] + 4),
                 (uint)*(byte *)(*param_1 + 0x51) * 2 + 0x50016 +
                 (uint)((uint)*(byte *)(*param_1 + 0x51) < (uint)*(byte *)((int)param_1 + 0x22)),0);
    (**(code **)(**(int **)(*(int *)(param_1[7] + 4) + 0x68) + 0x6c))();
    FUN_02023894(*(undefined4 *)(param_1[5] + 4),(uint)*(byte *)((int)param_1 + 0x23) * 2 + 0x5000c,
                 0);
    (**(code **)(**(int **)(*(int *)(param_1[5] + 4) + 0x68) + 0x6c))();
    FUN_0214f960(param_1[5],&DAT_0215c11c + iVar2 * 3);
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    return;
  }
  return;
}


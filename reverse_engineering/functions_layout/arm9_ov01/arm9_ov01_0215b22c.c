
void FUN_0215b22c(uint param_1,ushort *param_2,ushort *param_3,int param_4,undefined4 param_5,
                 undefined1 param_6)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  
  uVar1 = param_1;
  puVar2 = param_2;
  puVar3 = param_3;
  while( true ) {
    uVar5 = (uint)*puVar2;
    if (uVar5 == 0) {
      uVar1 = (uint)*puVar3;
    }
    if (uVar5 == 0 && uVar1 == 0) break;
    uVar1 = (uint)*puVar3;
    if (uVar1 != uVar5) {
      pcVar4 = *(code **)(**(int **)(param_1 + 4) + 0xb4);
      (*pcVar4)(*(int **)(param_1 + 4),*(undefined4 *)(param_4 + 4),pcVar4,uVar5,param_4);
      FUN_0214f7c0(param_4,param_1);
      piVar6 = *(int **)(param_4 + 4);
      (**(code **)(*(int *)piVar6[0x19] + 0x70))();
      (**(code **)(*piVar6 + 0xc4))();
      FUN_0215b20c(param_4,param_5);
      piVar6 = *(int **)(*(int *)(param_4 + 4) + 100);
      (**(code **)(*piVar6 + 0xa8))(piVar6,param_6);
      piVar6 = *(int **)(*(int *)(param_4 + 4) + 100);
      (**(code **)(*piVar6 + 0x6c))(piVar6,param_2,0xffffffff);
      (**(code **)(**(int **)(param_4 + 4) + 0xd8))(*(int **)(param_4 + 4),1);
      for (; *param_2 != 0; param_2 = param_2 + 1) {
        *param_3 = *param_2;
        param_3 = param_3 + 1;
      }
      return;
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


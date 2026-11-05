
void FUN_021595a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  func_0x021b6214(*(undefined4 *)(param_1[2] + 4),1);
  (**(code **)(**(int **)(param_1[2] + 4) + 0x148))(*(int **)(param_1[2] + 4),0x10);
  iVar1 = FUN_0203b414(0);
  local_14 = 0;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_14);
  iVar1 = FUN_0203b414(3);
  local_18 = 0x1000;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_18);
  uVar3 = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(*param_1 + 0xa0);
  *(char *)((int)param_1 + 0x1e) = (char)*(undefined4 *)(*param_1 + 0xa8);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)((int)param_1 + 0x1d);
  *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)((int)param_1 + 0x1d);
  if (*(char *)((int)param_1 + 0x1d) == -1) {
    iVar1 = 0x25;
  }
  else {
    iVar1 = 0x24;
  }
  param_1[4] = iVar1;
  do {
    if ((uint)param_1[6] <= uVar3) {
LAB_021596d4:
      func_0x021bd730(*(undefined4 *)(*param_1 + 0x88),param_1[4],0);
      return;
    }
    if (*(char *)(*param_1 + 0xa0) == *(char *)((int)param_1 + uVar3 + 0x20)) {
      (**(code **)(**(int **)(param_1[3] + 4) + 0x1a0))(*(int **)(param_1[3] + 4),uVar3,0);
      (**(code **)(**(int **)(param_1[3] + 4) + 0x198))(*(int **)(param_1[3] + 4),uVar3);
      goto LAB_021596d4;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}


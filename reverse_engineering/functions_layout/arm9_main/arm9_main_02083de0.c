
void FUN_02083de0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  do {
    if (iVar4 == 0) {
      return;
    }
    (**(code **)(iVar4 + 0x28))(iVar4);
    FUN_02083c44(iVar4);
    uVar1 = (*(uint *)(iVar4 + 0x2c) & 0xff0000) >> 0x10;
    for (puVar5 = *(undefined4 **)(param_1 + 0x24 + uVar1 * 8); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      if (iVar4 == puVar5[2]) {
        FUN_02037c24(param_1 + 0x24 + uVar1 * 8,puVar5);
        puVar5[2] = 0;
        FUN_02037b98(param_1 + 0x84,puVar5);
        break;
      }
    }
    if (*(int *)(iVar4 + 0x14) != 0) {
      FUN_0207a7e0();
      piVar2 = *(int **)(*(int *)(iVar4 + 8) + 4);
      (**(code **)(*piVar2 + 0x24))(piVar2,0);
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    if (*(int *)(iVar4 + 0x18) != 0) {
      func_0x021554ac();
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
    if (((*(int *)(iVar4 + 0x20) == 0) && (*(int *)(iVar4 + 8) != 0)) &&
       (iVar3 = *(int *)(*(int *)(iVar4 + 8) + 4), -1 < *(char *)(iVar3 + 0x29))) {
      piVar2 = *(int **)(iVar4 + 0xc);
      if (piVar2 == (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x68) + 0x70))();
        (**(code **)(**(int **)(iVar4 + 8) + 8))();
      }
      else {
        if (-1 < *(char *)(piVar2[1] + 0x29)) {
          (**(code **)(*piVar2 + 8))();
        }
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    FUN_02037c24(param_1 + 0x1c,iVar4);
    FUN_020517fc(iVar4,0,0x40);
    FUN_02037b98(param_1 + 0x14,iVar4);
    iVar4 = *(int *)(param_1 + 0x1c);
  } while( true );
}


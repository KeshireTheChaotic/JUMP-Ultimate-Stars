
void FUN_02084a64(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar3 = 0;
  do {
    piVar4 = (int *)(param_1 + 0x44 + iVar3 * 8);
    iVar1 = FUN_0203b414(iVar3 + 1);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x94))(piVar2,0);
    for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(piVar4 + 1); iVar1 = iVar1 + 1) {
      piVar2 = *(int **)(*piVar4 + iVar1 * 0x1c);
      iVar5 = *piVar4 + iVar1 * 0x1c;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      switch(*(undefined1 *)(iVar5 + 0x14)) {
      case 0:
        goto LAB_02084af4;
      case 1:
LAB_02084af4:
        if (*(int *)(iVar5 + 0x10) != 0) {
          FUN_0206ae98();
        }
        break;
      case 2:
        goto LAB_02084b08;
      case 3:
LAB_02084b08:
        if (*(int *)(iVar5 + 0x10) != 0) {
          FUN_02047be4(*(undefined4 *)(*(int *)(*(int *)(param_1 + iVar3 * 4 + 0xc) + 4) + 100));
        }
        break;
      case 4:
        iVar6 = *(int *)(iVar5 + 0x10);
        pbVar7 = *(byte **)(iVar5 + 0xc);
        if (iVar6 != 0) {
          FUN_020428dc(DAT_020a0f64,&LAB_020854a4,iVar5);
          for (iVar5 = 0; iVar5 < (int)(uint)*pbVar7; iVar5 = iVar5 + 1) {
            if (*(int *)(iVar6 + iVar5 * 4) != 0) {
              FUN_02042660(DAT_020a0f64);
              *(undefined4 *)(iVar6 + iVar5 * 4) = 0;
            }
          }
          FUN_0201b268(iVar6);
        }
        break;
      case 5:
        if (*(int **)(iVar5 + 0x10) != (int *)0x0) {
          (**(code **)(**(int **)(iVar5 + 0x10) + 8))();
        }
      }
    }
    if (*piVar4 != 0) {
      FUN_0201b268();
      *piVar4 = 0;
    }
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_0206b138();
      }
      iVar3 = 0;
      do {
        piVar2 = *(int **)(param_1 + iVar3 * 4 + 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      iVar3 = 0;
      do {
        piVar2 = *(int **)(param_1 + iVar3 * 4 + 0x28);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + iVar3 * 4 + 0xc);
        if (iVar1 != 0) {
          FUN_02047ccc(*(undefined4 *)(*(int *)(iVar1 + 4) + 100));
          (**(code **)(**(int **)(param_1 + iVar3 * 4 + 0xc) + 8))();
          *(undefined4 *)(param_1 + iVar3 * 4 + 0xc) = 0;
        }
        if (*(int *)(param_1 + iVar3 * 4 + 0x18) != 0) {
          FUN_02034d7c();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      FUN_0201b244(param_1);
      return;
    }
  } while( true );
}


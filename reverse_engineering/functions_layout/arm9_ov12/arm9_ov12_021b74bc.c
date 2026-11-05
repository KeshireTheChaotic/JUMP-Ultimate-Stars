
void FUN_021b74bc(int *param_1,uint param_2,int param_3,undefined1 *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_24;
  int local_1c;
  int local_18;
  
  if (((param_1[0x24] & 8U) != 8) && ((*(uint *)(param_1[0x27] + 0x90) & 8) != 8)) {
    if ((param_1[0x2e] & param_2) == 0) {
      if ((((char)param_1[0x29] != '\0') && (param_3 == -0x7ffffffe)) ||
         (((char)param_1[0x29] == '\0' && (param_3 == -0x80000000)))) {
        bVar1 = false;
        for (uVar6 = 0; uVar6 < (uint)param_1[0x4b]; uVar6 = uVar6 + 1) {
          iVar2 = uVar6 * 8;
          uVar5 = *(uint *)(param_1[0x4a] + iVar2);
          if (uVar5 == (uVar5 & param_2)) {
            bVar1 = true;
            piVar7 = *(int **)(param_1[0x4a] + iVar2 + 4);
            local_24 = 0;
            do {
              if ((piVar7 == (int *)0x0) || ((piVar7[0x24] & 8U) != 8)) break;
              piVar7 = (int *)FUN_021b6388(piVar7,*(undefined4 *)(iVar2 + param_1[0x4a]));
              local_24 = local_24 + 1;
            } while (local_24 < 0x65);
            if (param_1[0x3b] != 0) {
              if (piVar7 == (int *)0x0) {
                local_18 = 0;
              }
              else {
                local_18 = FUN_021acab4(piVar7);
              }
              uVar4 = FUN_021acab4(param_1);
              (*(code *)param_1[0x3b])(uVar4,param_2,&local_18);
              if (local_18 == 0) {
                piVar7 = (int *)0x0;
              }
              else {
                piVar7 = *(int **)(local_18 + 4);
              }
            }
            if (piVar7 != (int *)0x0) {
              piVar3 = (int *)piVar7[0x27];
              while ((piVar3 != (int *)0x0 && ((piVar3[0x24] & 1U) != 1))) {
                (**(code **)(*piVar3 + 0x148))(piVar3,1);
              }
              FUN_021b7714(param_1,param_2);
              (**(code **)(*piVar7 + 0x148))(piVar7,1);
              *param_4 = 1;
            }
          }
        }
        if ((!bVar1) && (param_1[0x3b] != 0)) {
          local_1c = 0;
          uVar4 = FUN_021acab4(param_1);
          (*(code *)param_1[0x3b])(uVar4,param_2,&local_1c);
          if (local_1c != 0) {
            piVar7 = *(int **)(*(int *)(local_1c + 4) + 0x9c);
            while ((piVar7 != (int *)0x0 && ((piVar7[0x24] & 1U) != 1))) {
              (**(code **)(*piVar7 + 0x148))(piVar7,1);
            }
            FUN_021b7714(param_1,param_2);
            (**(code **)(**(int **)(local_1c + 4) + 0x148))(*(int **)(local_1c + 4),1);
            *param_4 = 1;
          }
        }
      }
    }
    else if (((*(char *)((int)param_1 + 0xa5) != '\0') && (param_3 == -0x7ffffffe)) ||
            ((*(char *)((int)param_1 + 0xa5) == '\0' && (param_3 == -0x80000000)))) {
      iVar2 = (**(code **)(*param_1 + 0x15c))();
      if (iVar2 != 0) {
        FUN_021b7714(param_1,param_2);
      }
      *param_4 = 1;
    }
  }
  return;
}


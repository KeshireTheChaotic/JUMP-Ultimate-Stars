
void FUN_02037c54(int *param_1,code *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int aiStack_30 [2];
  int local_28 [2];
  
  piVar4 = aiStack_30;
  if (*param_1 != 0) {
    if (param_3 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = -1;
    }
    FUN_02037b54(param_1,local_28);
    FUN_02037b98(param_1,aiStack_30);
    piVar7 = local_28;
    do {
      piVar2 = (int *)*piVar7;
      if (piVar2 == (int *)piVar4[1]) break;
      piVar5 = (int *)piVar4[1];
      piVar7 = (int *)0x0;
      while (piVar5 != piVar2) {
        iVar1 = (*param_2)(piVar5,piVar5[1]);
        if (iVar6 * iVar1 < 0) {
          piVar3 = (int *)piVar5[1];
          piVar7 = piVar5;
          if (piVar3 == piVar2) {
            FUN_02037e98(param_1,piVar3);
            break;
          }
          iVar1 = (*param_2)(piVar5,piVar3[1]);
          if (iVar6 * iVar1 < 0) {
            piVar3 = (int *)piVar3[1];
            while ((piVar3 != piVar2 && (iVar1 = (*param_2)(piVar5,piVar3[1]), iVar6 * iVar1 < 0)))
            {
              piVar3 = (int *)piVar3[1];
            }
            FUN_02037c24(param_1,piVar5);
            FUN_02037bd8(param_1,piVar3[1],piVar5);
            if (piVar2 == piVar3) {
              piVar7 = (int *)piVar2[1];
              break;
            }
            piVar5 = (int *)piVar5[1];
          }
          else {
            FUN_02037e98(param_1,piVar3);
            piVar5 = (int *)piVar5[1];
          }
        }
        else {
          piVar5 = (int *)piVar5[1];
        }
      }
      if (piVar7 != (int *)0x0) {
        piVar2 = (int *)piVar4[1];
        piVar5 = (int *)*piVar7;
      }
      if (piVar7 == (int *)0x0 || piVar5 == piVar2) break;
      piVar4 = (int *)0x0;
      while (piVar5 != piVar2) {
        iVar1 = (*param_2)(piVar5,*piVar5);
        if (iVar6 * iVar1 < 1) {
          piVar5 = (int *)*piVar5;
        }
        else {
          piVar3 = (int *)*piVar5;
          piVar4 = piVar5;
          if (piVar3 == piVar2) {
            FUN_02037e98(param_1,piVar3[1]);
            break;
          }
          iVar1 = (*param_2)(piVar5,*piVar3);
          if (iVar6 * iVar1 < 1) {
            FUN_02037e98(param_1,piVar3[1]);
            piVar5 = (int *)*piVar5;
          }
          else {
            piVar3 = (int *)*piVar3;
            while ((piVar3 != piVar2 && (iVar1 = (*param_2)(piVar5,*piVar3), 0 < iVar6 * iVar1))) {
              piVar3 = (int *)*piVar3;
            }
            FUN_02037c24(param_1,piVar5);
            FUN_02037bd8(param_1,piVar3,piVar5);
            if (piVar2 == piVar3) {
              piVar4 = (int *)*piVar2;
              break;
            }
            piVar5 = (int *)*piVar5;
          }
        }
      }
    } while (piVar4 != (int *)0x0);
    FUN_02037c24(param_1,local_28);
    FUN_02037c24(param_1,aiStack_30);
  }
  return;
}


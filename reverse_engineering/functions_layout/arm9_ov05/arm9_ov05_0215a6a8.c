
void FUN_0215a6a8(undefined4 *param_1,short *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 != (short *)0x0) {
    param_1[3] = param_2;
    uVar6 = param_4;
    if (param_3 == -0x10) {
      cVar1 = FUN_0214d500(*param_1,(int)*param_2);
      *(char *)((int)param_1 + 0x4d7) = -cVar1;
    }
    else {
      *(char *)((int)param_1 + 0x4d7) = (char)param_3;
    }
    *(char *)(param_1 + 0x136) = (char)param_4;
    *(undefined1 *)((int)param_1 + 0x4da) = 0;
    *(undefined1 *)((int)param_1 + 0x4d9) = *(undefined1 *)((int)param_1 + 0x4da);
    iVar2 = FUN_02076d00(param_2);
    iVar4 = 0;
    do {
      iVar5 = 0;
      do {
        if (*(char *)(iVar2 + iVar4 * 5 + iVar5) != '\0') {
          iVar3 = (int)*(char *)((int)param_1 + 0x4d9);
          if (*(char *)((int)param_1 + 0x4d9) < iVar5) {
            iVar3 = iVar5;
          }
          *(char *)((int)param_1 + 0x4d9) = (char)iVar3;
          iVar3 = (int)*(char *)((int)param_1 + 0x4da);
          if (*(char *)((int)param_1 + 0x4da) < iVar4) {
            iVar3 = iVar4;
          }
          *(char *)((int)param_1 + 0x4da) = (char)iVar3;
        }
        iVar5 = (iVar5 + 1) * 0x1000000 >> 0x18;
      } while (iVar5 < 5);
      iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18;
    } while (iVar4 < 4);
    FUN_0215ccf0(param_1,param_2,0,0,0,uVar6);
    (**(code **)(**(int **)(param_1[0x14] + 4) + 0x148))(*(int **)(param_1[0x14] + 4),8);
    (*(code *)param_1[0x82])(param_1,param_1[0x81],5,0,param_2);
  }
  return;
}


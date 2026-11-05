
int FUN_0202fe9c(int *param_1,int param_2,int param_3,int *param_4,undefined2 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_120 [256];
  int *piStack_20;
  
  piStack_20 = param_4;
  uVar2 = FUN_02004b04(param_3);
  uVar6 = 0;
  while( true ) {
    if (uVar2 <= uVar6) {
      *param_4 = param_2;
      iVar5 = (**(code **)(**(int **)(param_2 + 0x14) + 0x10))
                        (*(int **)(param_2 + 0x14),param_3,param_5);
      return iVar5;
    }
    bVar1 = *(byte *)(param_3 + uVar6);
    if ((((bVar1 < 0x81) || (0x9c < bVar1)) && ((bVar1 < 0xe0 || (0xfc < bVar1)))) &&
       (*(char *)(param_3 + uVar6) == '.')) break;
    uVar6 = uVar6 + 1;
  }
  FUN_02051890(param_3,local_120,uVar6);
  local_120[uVar6] = 0;
  uVar3 = FUN_020326b0();
  if ((char)param_1[2] == '\0') {
    piVar4 = (int *)(**(code **)(*param_1 + 0x10))(param_1,local_120,uVar3);
  }
  else {
    iVar5 = FUN_02005f14(local_120);
    if (iVar5 < (int)(uint)*(ushort *)((int)param_1 + 10)) {
      piVar4 = (int *)(**(code **)(*param_1 + 0x10))(param_1,local_120,uVar3);
    }
    else {
      piVar4 = (int *)0x0;
    }
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,param_3 + uVar6 + 1);
  if (iVar5 == 0) {
    return 0;
  }
  *param_4 = param_2;
  return iVar5;
}


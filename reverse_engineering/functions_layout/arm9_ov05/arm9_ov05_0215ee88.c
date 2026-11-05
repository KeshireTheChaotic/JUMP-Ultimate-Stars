
void FUN_0215ee88(int param_1,int param_2,short param_3,short param_4,short param_5,short param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_0203b3e4();
  }
  else {
    iVar1 = FUN_0203b3f4();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x88);
  iVar2 = param_1 + param_2 * 8;
  *(short *)(iVar2 + 2) = param_4;
  *(short *)(param_1 + param_2 * 8) = param_3;
  *(short *)(iVar2 + 4) = param_3 + param_5;
  *(short *)(iVar2 + 6) = param_4 + param_6;
  iVar1 = param_1 + param_2 * 8;
  if (*(short *)(iVar2 + 2) < 0) {
    *(undefined2 *)(iVar2 + 2) = 0;
  }
  if (0xc0 < *(short *)(iVar1 + 2)) {
    *(undefined2 *)(iVar1 + 2) = 0xc0;
  }
  iVar1 = param_1 + param_2 * 8;
  if (*(short *)(iVar1 + 6) < 0) {
    *(undefined2 *)(iVar1 + 6) = 0;
  }
  iVar1 = param_1 + param_2 * 8;
  if (0xc0 < *(short *)(iVar1 + 6)) {
    *(undefined2 *)(iVar1 + 6) = 0xc0;
  }
  if (*(short *)(param_1 + param_2 * 8) < 0) {
    *(undefined2 *)(param_1 + param_2 * 8) = 0;
  }
  if (0xff < *(short *)(param_1 + param_2 * 8)) {
    *(undefined2 *)(param_1 + param_2 * 8) = 0xff;
  }
  iVar1 = param_1 + param_2 * 8;
  if (*(short *)(iVar1 + 4) < 0) {
    *(undefined2 *)(iVar1 + 4) = 0;
  }
  iVar1 = param_1 + param_2 * 8;
  if (0xff < *(short *)(iVar1 + 4)) {
    *(undefined2 *)(iVar1 + 4) = 0xff;
  }
  FUN_0215ee0c(uVar3,param_2,param_1 + param_2 * 8);
  FUN_0215ede4(uVar3,param_2,1);
  return;
}


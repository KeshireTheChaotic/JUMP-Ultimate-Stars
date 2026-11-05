
void FUN_0217fed0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 0:
    (**(code **)(param_4 + 0x630))(param_4,0,param_3,*(undefined4 *)(param_4 + 0x634));
    bVar1 = *(byte *)(param_3 + 5);
    if (((((bVar1 & 3) == 0) || ((bVar1 & 0x40) == 0)) && ((bVar1 & 0x2c) == 0)) &&
       (*(int *)(param_4 + 0x624) == 0)) {
      if ((*(byte *)((int)param_3 + 0x15) & 1) == 0) {
        uVar3 = 2;
      }
      else if ((*(int *)(param_4 + 0x4c) == 0) || (*(int *)(param_4 + 0x40) == 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      FUN_0217f440(param_4,param_3,0,uVar3);
    }
    break;
  case 1:
    if ((*(byte *)(param_3 + 5) & 0x43) == 0) {
      (**(code **)(param_4 + 0x630))(param_4,2,param_3,*(undefined4 *)(param_4 + 0x634));
    }
    else {
      (**(code **)(param_4 + 0x630))(param_4,1,param_3,*(undefined4 *)(param_4 + 0x634));
    }
    break;
  case 2:
    if ((*(byte *)(param_3 + 5) & 0x2c) != 0) {
      FUN_0217f120(param_4,param_3);
    }
    (**(code **)(param_4 + 0x630))(param_4,3,param_3,*(undefined4 *)(param_4 + 0x634));
    break;
  case 3:
    if (*(int *)(param_4 + 0x620) != 0) {
      FUN_02180fe8();
    }
    iVar2 = FUN_0200131c(*(undefined4 *)(param_1 + 4));
    if ((iVar2 == 0) || (*(int *)(param_4 + 0x10) == 0)) {
      (**(code **)(param_4 + 0x630))(param_4,4,0,*(undefined4 *)(param_4 + 0x634));
    }
    break;
  case 5:
    (**(code **)(param_4 + 0x630))(param_4,5,0,*(undefined4 *)(param_4 + 0x634));
    break;
  case 6:
    FUN_0217f4c8(param_4,*(undefined4 *)(param_4 + 0x4ec));
  }
  if (((param_3 != (int *)0x0) && (*param_3 == *(int *)(param_4 + 0x628))) &&
     ((short)param_3[1] == *(short *)(param_4 + 0x62c))) {
    *(int *)(param_4 + 0x628) = 0;
  }
  return;
}


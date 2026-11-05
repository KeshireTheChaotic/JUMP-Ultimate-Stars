
void FUN_021b3b7c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_4 + 4);
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 4);
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  ALWidgetBase::RegistSkin(param_1,uVar1,uVar2,uVar3,param_4);
  return;
}


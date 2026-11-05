
void FUN_0201c06c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x10c))();
  uVar2 = (**(code **)(*param_1 + 0x108))();
  do {
    uVar2 = uVar2 + 1;
    if (uVar1 <= uVar2) {
      return;
    }
    uVar3 = (**(code **)(*param_1 + 0x104))(param_1,uVar2);
  } while ((uVar3 & 0xfff0) != 0xff80);
  (**(code **)(*param_1 + 0xf4))(param_1,uVar2);
  return;
}


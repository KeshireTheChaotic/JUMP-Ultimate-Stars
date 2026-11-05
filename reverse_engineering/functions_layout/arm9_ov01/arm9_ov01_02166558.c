
void FUN_02166558(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02087670();
  iVar1 = FUN_02087654();
  if (iVar1 != 0) {
    FUN_02087280();
    FUN_02087268();
  }
  if (*(char *)(iVar2 + 0x94) != '\x04') {
    FUN_02071f08();
    FUN_020883f4();
  }
  if (iVar1 == 0) {
    FUN_02087600();
  }
  FUN_02087160();
  FUN_020882e0();
  FUN_02088330();
  FUN_021665b4(iVar2);
  FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_021665b0_1);
  return;
}


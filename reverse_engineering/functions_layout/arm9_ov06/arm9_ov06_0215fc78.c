
void FUN_0215fc78(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0xc) & 1 << (param_2 & 0xff)) == 0) {
    return;
  }
  (*(code *)(&PTR_LAB_0217221c)[param_2])();
  return;
}


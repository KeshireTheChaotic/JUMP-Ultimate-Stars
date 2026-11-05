
void FUN_0215e7cc(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0xc);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*pcVar1)();
  return;
}


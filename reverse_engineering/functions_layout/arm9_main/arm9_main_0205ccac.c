
void FUN_0205ccac(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar2 = FUN_0205e0dc(param_1 + 1,0);
  if (iVar2 != 0) {
    do {
      for (iVar3 = FUN_0205e0dc(iVar2,0); iVar3 != 0; iVar3 = FUN_0205e0dc(iVar2,iVar3)) {
        if (*(code **)(iVar3 + 0xc) != (code *)0x0) {
          (**(code **)(iVar3 + 0xc))
                    (iVar3 + 0x20,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0x10),
                     *(undefined4 *)(iVar3 + 0x14));
          bVar1 = true;
        }
      }
      FUN_0205e108(param_1 + 1,iVar2);
      iVar2 = FUN_0205e0dc(param_1 + 1,0);
    } while (iVar2 != 0);
  }
  FUN_0205eaf0(*param_1,3);
  if (bVar1) {
    FUN_0205ca34();
  }
  FUN_0205ca54(param_1);
  return;
}



void FUN_0205cb14(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = false;
  if (param_2 == 0) {
    FUN_0205ccac();
    return;
  }
  if (param_2 < (int)(uint)*(ushort *)(param_1 + 3)) {
    do {
      uVar2 = FUN_0205e0dc(param_1 + 1,0);
      for (iVar3 = FUN_0205e0dc(uVar2,0); iVar3 != 0; iVar3 = FUN_0205e0dc(uVar2,iVar3)) {
        if (*(code **)(iVar3 + 0xc) != (code *)0x0) {
          (**(code **)(iVar3 + 0xc))
                    (iVar3 + 0x20,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0x10),
                     *(undefined4 *)(iVar3 + 0x14));
          bVar1 = true;
        }
      }
      FUN_0205e108(param_1 + 1,uVar2);
    } while (param_2 < (int)(uint)*(ushort *)(param_1 + 3));
  }
  FUN_0205ea08(*param_1,param_2);
  if (bVar1) {
    FUN_0205ca34();
  }
  FUN_0205ea64(*param_1,*(undefined2 *)(param_1 + 3));
  FUN_0205ca54(param_1);
  return;
}


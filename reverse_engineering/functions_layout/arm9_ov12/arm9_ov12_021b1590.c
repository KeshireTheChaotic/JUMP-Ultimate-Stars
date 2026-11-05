
void FUN_021b1590(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  uVar2 = 0;
  do {
    if ((1 << (uVar2 & 0xff) & param_2) != 0) {
      iVar1 = ALCollision::CreateChecker(param_1,uVar2);
      *(uint *)(iVar1 + 4) = param_3;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  uVar2 = 0;
  do {
    if ((1 << (uVar2 & 0xff) & param_3) != 0) {
      ALCollision::CreateChecker(param_1,uVar2);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  return;
}


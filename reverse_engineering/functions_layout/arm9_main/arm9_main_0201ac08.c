
void FUN_0201ac08(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_020a0c35 != '\0') {
    (**(code **)**(undefined4 **)(DAT_020a1088 + 4))();
  }
  uVar2 = 0;
  do {
    if (DAT_020a0e50 <= uVar2) {
LAB_0201aca8:
      uVar2 = 0;
      while( true ) {
        if (DAT_020a0e50 <= uVar2) {
          if (DAT_020a0c35 == '\0') {
            return;
          }
          (**(code **)(**(int **)(DAT_020a1088 + 4) + 4))();
          return;
        }
        if (((uint)(&DAT_020a1680)[uVar2] <= param_1) &&
           (param_1 < *(uint *)((&DAT_020a1680)[uVar2] + 0x4a4))) break;
        uVar2 = uVar2 + 1;
      }
      if (DAT_020a0c35 == '\0') {
        return;
      }
      (**(code **)(**(int **)(DAT_020a1088 + 4) + 4))();
      return;
    }
    uVar1 = (&DAT_020a1680)[uVar2];
    if (((uVar1 != 0) && (uVar1 < param_1)) && (param_1 < *(uint *)(uVar1 + 0x4a4))) {
      if (*(uint *)(uVar1 + 0x4a8) <= param_1) {
        if (DAT_020a0c35 == '\0') {
          return;
        }
        (**(code **)(**(int **)(DAT_020a1088 + 4) + 4))();
        return;
      }
      goto LAB_0201aca8;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}


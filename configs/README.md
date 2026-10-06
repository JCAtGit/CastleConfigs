# Note
Currently headers are not included yet, which will lead to (fatal) error and warning message.
This currently effects the resolution of semantics, but the AST syntactical elements will still be parsed.

## Evaluation Pipeline


```
1. Codebase -> 2. Instrumentation -> 3. Build -> 4. Decompilation -> 5. Evaluation -> 6. Analysis

```

## Specific Validation Tests
semantics tests on csmith
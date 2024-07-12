(rchunk
    (renv_sig_options
        (renv_engine
            engine: (renv_engine_key) @injection.language)
        )
    (renv_content) @injection.content
)

(rchunk
    (renv_sig_options
        !engine)
    (renv_content) @r @combined
)


(rinline
    (renv_content) @r
)


(latex) @latex @combined


